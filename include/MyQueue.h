#ifndef MYQUEUE_H
#define MYQUEUE_H


class MyQueue
{
    public:
        MyQueue();
        virtual ~MyQueue();
        void enqueue(int item);
        void dequeue();
        bool isEmpty();
        int getFront();
    protected:
    private:
        int front = 0, back = -1;
        int items[100];
};

#endif // MYQUEUE_H
