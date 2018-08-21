#include "CharStack.h"

CharStack::CharStack()
{
    ind = 0;
}

void CharStack::push(char x)
{
    ++ind;
    Stack[ind] = x;
}

void CharStack::pop()
{
    Stack[ind] = 0;
    --ind;
}
int CharStack::top()
{
    return Stack[ind];
}

bool CharStack::isEmpty()
{
    return ind == 0;
}

CharStack::~CharStack()
{
    //dtor
}
