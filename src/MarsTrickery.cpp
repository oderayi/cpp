#include "MarsTrickery.h"
#include <iostream>

using namespace std;

void MarsTrickery::setItems(int _items[]){

    int i = 0, x;
    while(x = _items[i]){
        items[i] = x;
        i++;
    }
}

void MarsTrickery::add(int left, int right, int inc){
    for(int i = left; i < right; i++){
        items[i] += inc;
    }
}

void MarsTrickery::print(){
    int i = 0, x;
    while(x = items[i]){
        cout << x << endl;
        i++;
    }

}
