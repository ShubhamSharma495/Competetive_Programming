#include <iostream>
using namespace std;


int solve(){
    int x;
    cin>>x;
    if(x==67) return 67;
    else return x+1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
} 