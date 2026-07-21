#include <bits/stdc++.h>
using namespace std;
using ll= long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        a[i] = 2*(i+1)-1;         
                        
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i + 1 == n ? '\n' : ' ');
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