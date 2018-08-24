#include "BinarySearch.h"

int BinarySearch::search(int items[], int numOfItems, int x){
    right = numOfItems;

    while( left <= right ){
        mid = (left + right) / 2;
        if( x == items[mid] ) return mid;
        if( x < items[mid] ) right = mid - 1;
        else if( x > items[mid] ) left = mid + 1;
    }

    return -1;

}
