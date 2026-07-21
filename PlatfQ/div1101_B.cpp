#include <bits/stdc++.h>
using namespace std;
using ll= long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    
    ll prefix = 0;
    ll minAvg = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        prefix += a[i];
        ll avg = prefix / (i + 1);
        minAvg = min(minAvg, avg);
        cout << minAvg << (i + 1 == n ? '\n' : ' ');
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

