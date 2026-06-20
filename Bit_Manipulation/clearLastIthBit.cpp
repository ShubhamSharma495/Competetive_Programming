#include <iostream>
using namespace std;

int ClearLastIthBit(int num, int i){
    int bitmask = (~0)<<i;
    num = num&bitmask;
    return num;
}

int main(){
    cout<< ClearLastIthBit(15,2);
}