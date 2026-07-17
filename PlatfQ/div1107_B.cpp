#include <bits/stdc++.h>
using namespace std;

long long digits(long long num){
    int c = 0;
    while(num > 0){
        num /= 10;
        c++;
    }
    return c;
}

void solve() {
    long long x, y;
    cin >> x;
    long long power_of_10 = 1;
    int count = digits(x);
    for(int i = 0; i < count; i++) {
        power_of_10 *= 10;
    }

    y = power_of_10 + 1;

    cout << y << "\n";
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}