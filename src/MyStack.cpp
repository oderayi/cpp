#include "MyStack.h"

MyStack::MyStack()
{
    ind = 0;
}

void MyStack::push(int x)
{
    ++ind;
    Stack[ind] = x;
}

void MyStack::pop()
{
    Stack[ind] = 0;
    --ind;
}
int MyStack::top()
{
    return Stack[ind];
}

bool MyStack::isEmpty()
{
    return ind == 0;
}

MyStack::~MyStack()
{
    //dtor
}
