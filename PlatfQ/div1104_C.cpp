#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool issorted(const vector<long long>& a, int n){
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}


void solve1() { //accepted
    int n;
    cin >> n;

    long long cur;
    cin >> cur;

    for (int i = 1; i < n; i++) {
        long long x;
        cin >> x;

        if (x >= cur)
            cur = x;
        else
            cur += x;
    }

    cout << cur << '\n';
}


void solve2(){ // works but gives TLE
    int n;
    cin >> n;
    vector<long long> a(n); 

    for(int i=0;i<n;i++) cin>>a[i];

    while(!issorted(a,n)){
        
        for(int i=0; i<n-1; i++){
            if(a[i]==a[i+1]){
                continue;
            }else if(a[i]>a[i+1]) {
                long long ai=a[i];
                a[i]=a[i+1];
                a[i+1]=ai+a[i+1];
            }else continue;
        }

    }
    cout<< a[n-1]<<" \n";
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve1();
    }
    return 0;
}