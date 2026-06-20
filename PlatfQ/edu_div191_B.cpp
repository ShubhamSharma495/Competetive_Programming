#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int k=0; k<n;k++){ 
        cin>>arr[k];
    }
    int max_l=0;
    int i=0;
    while(i<n){
        int len=0;
        int j=0;
        while(j<n){
            if(arr[j]-arr[j-1]){
                len++;
            }
            j++;
        }
        cout<<len<<"\n";
        if(len>max_l) max_l=len;
        i++;

    }
    cout<<max_l<<"\n";


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

