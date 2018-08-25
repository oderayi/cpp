#ifndef MARSTRICKERY_H
#define MARSTRICKERY_H


class MarsTrickery
{
    public:
        void setItems(int _items[]);
        void add(int left, int right, int inc);
        void print();
    protected:
    private:
        int items[];
};

#endif // MARSTRICKERY_H
