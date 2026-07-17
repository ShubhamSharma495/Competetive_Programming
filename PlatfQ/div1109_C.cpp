#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll=long long; 

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    int g = __gcd(x, y);

    bool possible = true;
    for (int i = 0; i < n; i++) {
        if (p[i] % g != (i + 1) % g) {
            possible = false;
        }
    }

    cout << (possible ? "YES\n" : "NO\n");
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
