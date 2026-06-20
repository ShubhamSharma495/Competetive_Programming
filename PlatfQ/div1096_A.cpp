#include <iostream>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    if(x%2!=0 && y%2!=0) cout<<"NO\n";
    if(x%2==0 && y%2==0) cout<<"YES\n";
    if(x%2==0 && y%2!=0 || x%2!=0 && y%2==0){
        cout<<"YES\n";
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
} 