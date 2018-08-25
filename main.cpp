#include "iostream"
#include "bits/stdc++.h"
#include "MyStack.h"
#include "MyQueue.h"
#include "SyntaxParser.h"
#include "BinarySearch.h"
#include "MarsTrickery.h"

using namespace std;

ifstream f("/Users/steven/Playground/C++/creatingProject/data.in");
ofstream g("/Users/steven/Playground/C++/creatingProject/data.out");

void testStack();
void testParser();
void testQueue();
void testBinarySearch();
void spojBinarySearch();
void testMarsTrickery();

int main()
{
    //testStack();
    //testParser();
    //testQueue();
    //testBinarySearch();
    spojBinarySearch();
    //testMarsTrickery();

    return 0;
}

void testMarsTrickery(){
    MarsTrickery marsTrickery;

    int items[] = { 1, 98, 3, 7, 4, 9, 3, 7, 10, 29, 83, 47, 58, 29, 45, 75, 938, 85, 73, 26 };

    marsTrickery.setItems(items);

    marsTrickery.add(0, 5, 6);
    marsTrickery.print();
}

void spojBinarySearch(){
    BinarySearch binarySearch;

    int n, q;

    cout << "Enter number of items and number of queries: ";
    cin >> n >> q;
    int items[n], queries[q];

    cout << "Enter items, one per line: " << endl;
    for(int i = 0; i < n; i++){
        cin >> items[i];
    }

    cout << "Enter queries, one per line: " << endl;
    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }

    int firstPos;

    for(int i = 0; i < q; i++){
      firstPos = binarySearch.searchFirst(items, n, queries[i]);
      cout << "First occurence of " << queries[i] << " is " << firstPos << endl;
    }
}

void testBinarySearch(){
    BinarySearch binarySearch;

    int n = 22, x;

    int items[] = { 1, 3, 3, 4, 7, 7, 9, 10, 26, 29, 29, 45, 47, 58, 73, 75, 83, 85, 98, 938, 938, 938 };

    cout << "Enter the number to search for: ";

    cin >> x;

    int pos = binarySearch.search(items, n, x);

    if(pos == -1) cout << "Item " << x << " was not found." << endl;
    else {
        int firstPos = binarySearch.searchFirst(items, n, x);
        int lastPos = binarySearch.searchLast(items, n, x);

        cout << "Item " << x << " was found at position " << pos << endl;
        cout << "First occurence was found at position " << firstPos << endl;
        cout << "Last occurence was found at position " << lastPos << endl;
    }
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
