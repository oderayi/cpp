#include <iostream>
#include <bits/stdc++.h>
#include <MyStack.h>
#include <SyntaxParser.h>


using namespace std;

ifstream f("/Users/steven/Playground/C++/creatingProject/data.in");
//ofstream g("/Users/steven/Playground/C++/creatingProject/data.out");

void testStack();
void testParser();

int main()
{
    //testStack();
    testParser();
    return 0;
}

void testParser(){
    char x; string code = "";
    SyntaxParser parser;

    while(f >> x){
      code += x;
    }

    parser.parse(code);

    if(parser.isValid()) cout << "Syntax correct!" << endl;
    else {
        cout << "Syntax incorrect: " << char(parser.getLastSymbol()) << endl;
        cout << "Parser remaining content: " << endl;
        parser.print();
    }

}

void testStack(){
    MyStack myStack;

    myStack.push(10);
    cout<<myStack.top()<<endl;

    myStack.push(20);
    cout<<myStack.top()<<endl;

    myStack.push(30);
    cout<<myStack.top()<<endl;

    myStack.pop();
    cout<<myStack.top()<<endl;

    myStack.pop();
    cout<<myStack.top()<<endl;

    myStack.pop();
    cout<<"After popping"<<" top = "<<myStack.top()<<endl;

    if(myStack.isEmpty()){
        cout<<"Stack is empty"<<endl;
    } else {
        cout<<"Stack is not empty"<<endl;
    }
}
