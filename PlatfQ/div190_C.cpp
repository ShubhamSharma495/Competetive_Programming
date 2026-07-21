#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin>>n;

    for (int i = 0; i < n; i++) {
        ll small = i + 1;
        ll med = 3 * n - 2 * i - 1;
        ll large = 3 * n - 2 * i;

        cout << small << " " << med << " " << large << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

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