#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    long long n, x, y, z;
    cin >> n >> x >> y >> z;
    long long speed1 = x + y;

    long long time1 = (n + speed1 - 1) / speed1; 
    long long lines_written = 0;
    long long time2 = 0;

    while (lines_written < n) {
        time2++; 
        lines_written += x;
        
        if (time2 > z) {
            lines_written += (10 * y);
        } else {
            lines_written += 0;
        }
    }
    cout << min(time1, time2) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


