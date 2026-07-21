#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll= long long;

void solve() {
    ll x,y;
    cin >> x>>y;
    
    if(x>=2*y && ((x-2*y)%3) ==0 && x>=-4*y ) cout<<"YES\n";
    else cout<<"NO\n";


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