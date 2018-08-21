#include "CountSort.h"

CountSort::CountSort()
{
    //ctor
}

void CountSort::sort(ifstream f){
    int n;
    f>>n;
    for(int i=1; i<=n; ++i){
        f>>x;
        ++A[x];

        maximum = max(maximum, x);
    }
    for(int i=1; i<=maximum; ++i){
        if(A[i] > 0){
            for(int j=1; j<=A[i]; ++j){
                cout<<i<<" ";
            }
        }
    }

}

CountSort::~CountSort()
{
    //dtor
}
