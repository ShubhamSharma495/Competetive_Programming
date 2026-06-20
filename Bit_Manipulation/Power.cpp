#include <iostream>
using namespace std;

int Power(int x, int n){
    int ans=1;
    while(n>0){
        int lastdig=n&1;
        if(lastdig){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<ans;
    return ans;

}

int main(){
    Power(3,5);
}