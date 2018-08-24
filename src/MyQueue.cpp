#include "MyQueue.h"

MyQueue::MyQueue()
{
    //ctor
}

void MyQueue::enqueue(int item){
    ++back;
    items[back] = item;
}

void MyQueue::dequeue(){
        items[front] = 0;
        front++;
}

int MyQueue::getFront(){
    return items[front];
}

bool MyQueue::isEmpty(){
    return back < front;
}

MyQueue::~MyQueue()
{
    //dtor
}
