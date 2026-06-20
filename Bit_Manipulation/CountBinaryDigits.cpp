#include <iostream>
using namespace std;

int countBinaryDigits_2nd(int num){
    int count = 0; 
    while(num > 0){
        int lastdigit = num & 1;
        count += lastdigit;
        num = num >> 1;
    }
    
    cout << count << endl;
    return count;
}

int countBinaryDigits(int num){

    int count=0;
    while(num>0){
        if(num&1==1){
            count+=1;
        }else{
            count+=0;
        }
        num=num>>1;
    }
    return count;
}


int main(){
    cout << countBinaryDigits(4);
}