#include <iostream>
#include <bits/stdc++.h>
#include <MyStack.h>
#include <MyQueue.h>
#include <SyntaxParser.h>
#include <BinarySearch.h>


using namespace std;

ifstream f("/Users/steven/Playground/C++/creatingProject/data.in");
ofstream g("/Users/steven/Playground/C++/creatingProject/data.out");

void testStack();
void testParser();
void testQueue();
void testBinarySearch();

int main()
{
    //testStack();
    //testParser();
    //testQueue();
    testBinarySearch();

    return 0;
}

void testBinarySearch(){
    BinarySearch binarySearch;

    int n, x;

    f >> n;

    int items[n];

    for(int i = 0; i < n; i++){
        f >> items[i];
    }

    cout << "Enter the number to search for: ";

    cin >> x;

    int pos = binarySearch.search(items, n, x);

    if(pos == -1) cout << "Item " << x << " was not found." << endl;
    else cout << "Item " << x << " was found in position " << pos << endl;

}

void testQueue(){
    MyQueue myQueue;

    myQueue.enqueue(10);
    cout<<myQueue.getFront()<<endl;

    myQueue.enqueue(20);
    cout<<myQueue.getFront()<<endl;

    myQueue.enqueue(30);
    cout<<myQueue.getFront()<<endl;

    myQueue.dequeue();
    cout<<myQueue.getFront()<<endl;

    myQueue.dequeue();
    cout<<myQueue.getFront()<<endl;

    myQueue.dequeue();
    cout<<myQueue.getFront()<<endl;

    cout << "After dequeueing: "
         << " front = "
         << myQueue.getFront()
         << endl;

    if(myQueue.isEmpty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;

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

    if(myStack.isEmpty()) cout<<"Stack is empty"<<endl;
    else cout<<"Stack is not empty"<<endl;

}
