#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solve(){
    vector<int> arr(7);
    
    for(int i=0;i<7;i++){
        cin>> arr[i];
    }
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<7;i++){
        sum+=arr[i];
        if(arr[i]>max) max=arr[i];

    }
    return 2*max - sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}


