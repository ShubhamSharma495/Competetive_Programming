#include <bits/stdc++.h>
using namespace std;
using ll= long long;

void solve() {
    int n,c;
    cin >> n>>c;
    vector<ll> a(n), b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];

    bool order=true;
    for(int i=0; i<n; i++){
        if(a[i]<b[i]){
            order=false;
            break;
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool flag=true;
    ll ans=0;
    for(int i=0; i<n; i++){
        if(a[i]<b[i]){
            flag=false;
            break;
        }
        ans+= a[i] - b[i];
    }

    if(!flag){
        cout<< -1<<endl;
    }else if(order){
        cout<< ans<<endl;
    }else{
        cout<< ans+c<<endl;
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