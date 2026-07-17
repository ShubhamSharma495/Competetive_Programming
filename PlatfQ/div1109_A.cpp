#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int has=0;
    int temp=0;
    for(int i=0; i<n;i++){
        if(str[i]=='#'){
            temp++;
        }else{
            has=max(has,temp);
            temp=0;
        }
    }
    has=max(has,temp);
    cout<< (has+1)/2<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
