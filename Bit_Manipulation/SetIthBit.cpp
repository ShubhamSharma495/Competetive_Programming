#include <iostream>
using namespace std;

int SetIthBit(int num, int i){
    int BitMask=1<<i;
    return num|BitMask;
}

int main(){
    cout << SetIthBit(6,3);
    return 0;
}