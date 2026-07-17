#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int count_1, count_2, count_3;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]==1){
            count_1++;
        }else if(a[i]==2){
            count_2++;
        }else{
            count_3++;
        }
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
