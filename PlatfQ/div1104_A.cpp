#include <iostream>
#include <vector>
using namespace std;


void solve(){
    int n;
    cin >> n;
    
    vector<int> a(n); 
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<n-1; i++){
        if(a[i] < a[i+1]){
            a[i+1] = a[i];
        }
    }
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    cout << sum << "\n";
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