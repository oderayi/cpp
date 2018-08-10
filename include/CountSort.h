#ifndef COUNTSORT_H
#define COUNTSORT_H
#include <bits/stdc++.h>

using namespace std;

class CountSort
{
    public:
        CountSort();
        virtual ~CountSort();
        void sort(ifstream f);
    protected:
    private:
        int A[101];
        int maximum, x;
};

#endif // COUNTSORT_H
