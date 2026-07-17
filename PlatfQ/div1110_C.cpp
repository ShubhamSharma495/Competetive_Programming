#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
using ll = long long;



ll solve() {
    int n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for (int i = 0; i < n;i++) cin>>a[i];
    ll score = 0;
    ll i=0;
    while (i<n ) {
        if (i+1 < n && c > min(a[i], a[i+1])) {
            score += max(a[i], a[i+1]) - c;
            i += 2;
        } else {
            score += a[i] - c;
            i++;
        }
    }
    return score;
}



int main(){
    int t;
    cin >> t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
