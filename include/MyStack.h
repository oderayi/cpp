#ifndef MYSTACK_H
#define MYSTACK_H


class MyStack
{
    public:
        MyStack();
        void push(int x);
        void pop();
        int top();
        bool isEmpty();
        virtual ~MyStack();
    protected:
    private:
        int Stack[100], ind;
};

#endif // MYSTACK_H
