#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int solve(){
    int n; cin>>n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >>x;
    for(auto &x : b) cin>>x;

    ll answer=0;
    for(int i=0; i<n ;i++){
        int j=i;
        for(; j<n && a[j]>b[i]; j++);
        if(j==n) {answer=-1; break;}
        for(; j>i; j-- ){swap(a[j], a[j-1]) ; answer++;}
    }
    return answer;


}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}


