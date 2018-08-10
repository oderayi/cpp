#include "SyntaxAnalyzer.h"

SyntaxAnalyzer::SyntaxAnalyzer()
{
    //ctor
}
bool SyntaxAnalyzer::parse(ifstream f){
    int n;
    char x,t;
    f>>n;

    for(int i=1; i<=n; ++i){
        f>>x;
        cout << "Read "<<x<<endl;
        if(isClosingMatch(x)){
            t = Stack.top();
            cout << t;
            if(getClosingMatch(x) != t) return false;
            Stack.pop();
        } else {
            Stack.push(x);
        }

    }
}

char SyntaxAnalyzer::getClosingMatch(char c){
     switch (c){
        case '(':
            return ')';
        case '{':
            return '}';
        case '[':
            return ']';
        default:
            return ' ';
        }
}

bool SyntaxAnalyzer::isClosingMatch(char c){
    if(c == '}' || c == ']' || c == ')') return true;
   else return false;
}

SyntaxAnalyzer::~SyntaxAnalyzer()
{
    //dtor
}
