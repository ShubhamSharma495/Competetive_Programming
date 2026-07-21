#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(n%2!=0) cout<<"NO\n";
    else if(sum%4==0) cout<<"YES\n";
    else cout<<"NO\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
