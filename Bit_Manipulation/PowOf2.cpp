#include <iostream>
using namespace std;

int isPowerOf2(int num){

    if(!(num&(num-1))){
        cout << "Power Of Two" << endl;

    }else{
        cout << "Not Power Of Two" << endl;
    }
}

int main(){
    isPowerOf2(8);
}