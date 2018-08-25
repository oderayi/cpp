#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H


class BinarySearch
{
    public:
        int search(int items[], int numOfItems, int x);
        int searchFirst(int items[], int numOfItems, int x);
        int searchLast(int items[], int numOfItems, int x);
    protected:
    private:
        int left = 0, right, mid;
};

#endif // BINARYSEARCH_H
