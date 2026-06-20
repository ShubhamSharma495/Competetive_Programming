#include <iostream>
using namespace std;

int ClearIthBit(int num, int i){
    int BitMask= ~(1<<i);
    return num&BitMask;

}

int main(){
    cout << ClearIthBit(6,1);
}