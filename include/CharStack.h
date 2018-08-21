#ifndef CHARSTACK_H
#define CHARSTACK_H


class CharStack
{
    public:
        CharStack();
        void push(char x);
        void pop();
        int top();
        bool isEmpty();
        virtual ~CharStack();
    protected:
    private:
        int Stack[100], ind;
};

#endif // CHARSTACK_H
