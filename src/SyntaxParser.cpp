#include "SyntaxParser.h"
#include "iostream"

using namespace std;

SyntaxParser::SyntaxParser()
{
    //ctor
}

void SyntaxParser::parse(string in){
    int xi;
    for(char& x : in){
      xi =  x;
      if(!symbols.isEmpty()){
        if(xi - symbols.top() == 1 || xi - symbols.top() == 2){
            symbols.pop();
            continue;
        }
        symbols.push(x);
      } else {
        symbols.push(x);
      }
    }
}

bool SyntaxParser::isValid(){
  return symbols.isEmpty();
}

char SyntaxParser::getLastSymbol(){
    return symbols.top();
}

void SyntaxParser::print(){
    char x;
    while((x = symbols.top())){
        cout << x << endl;
        symbols.pop();
    }
}

SyntaxParser::~SyntaxParser()
{
    //dtor
}
