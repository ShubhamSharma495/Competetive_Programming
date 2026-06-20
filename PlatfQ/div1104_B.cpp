#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(){
    int n;
    cin >> n;
    vector<int> a(n); 
    vector<int> b(n); 
    vector<int> x(n); 

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    for(int i=0; i<n; i++){
        if(b[n-1]>a[i]){
            cout<< -1<<" \n";
            break;
        }
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        
        
    }




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