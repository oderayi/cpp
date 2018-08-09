#include <iostream>
#include <bits/stdc++.h>
#include <MyStack.h>

using namespace std;

/*
int Stack[100], ind = 0;


void push(int x){
    ++ind;
    Stack[ind] = x;
}

void pop(){
    Stack[ind] = 0;
    --ind;
}

int top(){
    return Stack[ind];
}

bool isEmpty(){
    return ind == 0;
}*/

int main()
{

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
    return 0;
}
