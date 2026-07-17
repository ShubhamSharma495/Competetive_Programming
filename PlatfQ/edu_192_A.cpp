#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
    int k;
    cin>>k;
    vector<int> c(k);
        int count_3 = 0; 
        int count_2 = 0; 
        
        for (int i = 0; i < k; i++) {
            cin >> c[i];
            if (c[i] >= 3) {
                count_3++;
            }
            if (c[i] >= 2) {
                count_2++;
            }
        }
        
        if (count_3 >= 1 || count_2 >= 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
