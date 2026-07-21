#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];

    int c11=0, c00= 0, c10=0, c01= 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1 && b[i] == 1) c11++;
        else if (a[i]==0 && b[i]==0) c00++;
        else if (a[i]==1 && b[i]==0) c10++;
        else if (a[i]== 0 && b[i]== 1) c01++;
    }

    if (c10== 0 && c01== 0) {
        cout<< 0 << "\n";
        return;
    }
    if (c11+c10== 0) {
        cout<< -1 << "\n";
        return;
    }
    if (c10%2 !=0) {
        cout<< 1 << "\n";
        return;
    }
    if (c10> 0) {
        cout<<2 << "\n";
        return;
    }
    if (c00 > 0) {
        cout<<2 << "\n";
    } else {
        cout<< -1<< "\n";
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