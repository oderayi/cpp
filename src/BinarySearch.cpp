#include "BinarySearch.h"

int BinarySearch::search(int items[], int numOfItems, int x){
    right = numOfItems - 1;

    while( left <= right ){
        mid = (left + right) / 2;
        if( x == items[mid] ) return mid;
        if( x < items[mid] ) right = mid - 1;
        else if( x > items[mid] ) left = mid + 1;
    }

    return -1;

}

// Find first occurence
int BinarySearch::searchFirst(int items[], int numOfItems, int x){
    int result = -1;

    right = numOfItems - 1;

    while( left <= right ){
        mid = (left + right) / 2;
        if( x == items[mid] ) {
                result = mid;
                right = mid - 1;

        }
         else if( x < items[mid] ) right = mid - 1;
        else if( x > items[mid] ) left = mid + 1;
    }

    return result;

}


// Find last occurence
int BinarySearch::searchLast(int items[], int numOfItems, int x){
    int result = -1;

    right = numOfItems - 1;

    while( left <= right ){
        mid = (left + right) / 2;
        if( x == items[mid] ) {
                result = mid;
                left = mid + 1;

        }
         else if( x < items[mid] ) right = mid - 1;
        else if( x > items[mid] ) left = mid + 1;
    }

    return result;

}
