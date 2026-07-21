#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n,a,b;
    cin>>n>>a>>b;

    if(b<=3*a){
        cout<< (n/3)*b + min((n%3)*a,b) <<"\n";
    }else{
        cout<<n*a <<"\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}   