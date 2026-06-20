#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end(), greater<long long>());
    
    bool possible=true;
    for(int i=0;i<n-2;i++){
        if(arr[i]%arr[i+1]!=arr[i+2]){
            possible =false;
            break;
        }
    }
    if(possible){
        cout<<arr[0]<<" "<<arr[1]<<"\n";
    }else{
        cout<<-1<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}