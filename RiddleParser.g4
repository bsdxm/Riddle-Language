parser grammar RiddleParser;

options {
    tokenVocab=RiddleLexer;
}

@Header{
}

@parser::members {
}

program
    : statment_ed*
    | EOF
    ;

statment_ed
    : statment Semi? Endl?
    ;

statment
    : packStatment
    | importStatment
    | funcDefine
    | funcExpr
    | varStatment
    | forStatment
    | whileStatment
    | ifStatment
    | returnStatment
    | expression
    | LeftCurly statment_ed* RightCurly
    ;

packStatment
    : Package id
    ;

importStatment
    : Import id
    ;

varStatment
    : Var name=Identifier Colon type=Identifier
    | Var name=Identifier Assign value=expression
    | Var name=Identifier Colon type=Identifier Assign value=expression
    ;

funcExpr
    : id LeftBracket arge=argsExpr RightBracket
    ;

argsExpr
    : ((expression Comma)* expression)?
    ;

defineArgs
    : ((Identifier Colon id Comma)* (Identifier Colon id))?
    ;

funcDefine
    : Func funcName=Identifier LeftBracket args=defineArgs RightBracket (Colon returnType=id)? LeftCurly body=program RightCurly
    ;

forStatment
    : For LeftBracket (init=varStatment)? Semi (termCond=expression)? Semi (selfVar=statment)? RightBracket body=statment_ed
    ;

whileStatment
    : While LeftBracket runCond=expression RightBracket body=statment_ed
    ;

ifStatment returns [bool hasElse]
    : If LeftBracket cond=expression RightBracket body=statment_ed {$hasElse=false;}
    | If LeftBracket cond=expression RightBracket body=statment_ed Else elseBody=statment_ed {$hasElse=true;}
    ;

returnStatment
    : Return statment_ed
    ;

expression
    : LeftBracket expr=expression RightBracket              #bracketExpr    // (x)
    | Not expr=expression                                   #notExpr        // !x
    | Add expr=expression                                   #positiveExpr   // +x
    | Sub expr=expression                                   #negativeExpr   // -x
    | Add Add expr=expression                               #selfAddLeftExpr // ++x
    | expr=expression Add Add                               #selfAddRightExpr // x++
    | Sub Sub expr=expression                               #selfSubLeftExpr // ++x
    | expr=expression Sub Sub                               #selfSubRightExpr // x++
    | left=expression Star right=expression                 #starExpr       // x*y
    | left=expression Div  right=expression                 #divExpr        // x/y
    | left=expression Mod right=expression                  #modExpr        // x%y
    | left=expression Add right=expression                  #addExpr        // x+y
    | left=expression Sub right=expression                  #subExpr        // x-y
    | left=expression LeftLeft right=expression             #leftLeftExpr   // x<<y
    | left=expression RightRight right=expression           #rightRightExpr // x>>y
    | left=expression Greater right=expression              #greaterExpr    // x>y
    | left=expression Less   right=expression               #lessExpr       // x<y
    | left=expression Greater Assign right=expression       #greaterEqualExpr // x>=y
    | left=expression Less Assign right=expression          #lessEqualExpr  // x<=y
    | left=expression Equal  right=expression               #equalExpr      // x==y
    | left=expression Not Equal right=expression            #notEqualExpr   // x!=y
    | left=expression And right=expression                  #bitAndExpr     // x&y
    | left=expression Xor right=expression                  #bitXorExpr     // x^y
    | left=expression Or right=expression                   #bitOrExpr      // x|y
    | left=expression And And right=expression              #andExpr        // x&&y
    | left=expression Or Or right=expression                #orExpr         // x||y
    | left=expression Assign right=expression               #assignExpr     // x=y
    | left=expression Add Assign right=expression           #addAssignExpr     // x+=y
    | left=expression Sub Assign right=expression           #subAssignExpr     // x-=y
    | left=expression Star Assign right=expression          #starAssignExpr    // x*=y
    | left=expression Div Assign right=expression           #divAssignExpr     // x/=y
    | left=expression Mod Assign right=expression           #modAssignExpr     // x%=y
    | left=expression Add Assign right=expression           #addAssignExpr     // x+=y
    | left=expression And Assign right=expression           #andAssignExpr          // x&=y
    | left=expression Or  Assign right=expression           #orAssignExpr           // x|=y
    | left=expression Xor Assign right=expression           #xorAssignExpr          // x^=y
    | left=expression LeftLeft Assign right=expression      #leftLeftAssignExpr     // x<<=y
    | left=expression RightRight Assign right=expression    #rightRightAssignExpr   // x>>=y
    | number                                                #numberExpr
    | id                                                    #objectExpr
    ;

id: Identifier (Dot Identifier)*;

number returns [int value]
    : Decimal{
        $value = stoi($Decimal.text);
    }
    | Hexadecimal{
        $value = stoi($Hexadecimal.text.substr(2),nullptr,16);
    }
    | Binary{
        $value = stoi($Binary.text.substr(2),nullptr,2);
    }
    | Octal{
        $value = stoi($Octal.text.substr(2),nullptr,8);
    }
    ;