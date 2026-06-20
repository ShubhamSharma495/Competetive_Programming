#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    

    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}