#include <iostream>
using namespace std;

int XpowerN(int x, int n){
    if(x==0) return 1;
    int ans=1;
    if(n>0){
        ans =XpowerN(x, n-1)*x;
    }
    return ans;
}

int main(){
    cout<<XpowerN(0,4);

}