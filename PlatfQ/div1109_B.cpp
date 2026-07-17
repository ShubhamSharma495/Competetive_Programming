#include <bits/stdc++.h>
using namespace std;
using ll=long long; 

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    bool possible=true;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
        ll temp=(1LL*(i+1)*(i+2))/2;
        if(sum<temp){
            possible=false;
            
        }
    }
    cout << (possible ? "YES" : "NO") << "\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
