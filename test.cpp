#include <iostream>
using namespace std;

int updateIthBit(int num, int i, int val){
    num = num&(~(1<<i));
    num= num|(val<<i);
    return num;
}

int main(){
    cout << updateIthBit(7,2,0);
    return 0;
}