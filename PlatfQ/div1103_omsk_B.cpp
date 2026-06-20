#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve03() { //accepted
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    bool possible = true;
    for (int col = 0; col < k; col++) {
        int ones_in_this_column = 0;
    
        for (int i = col; i < n; i += k) { 
            if (s[i] == '1') {
                ones_in_this_column++;
            }
        }
        if (ones_in_this_column % 2 != 0) {
            possible = false;
            break; 
        }
    }
    
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 
void solve02() { //Accepted
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    // Vector to store the count of '1's for each remainder group from 0 to k-1
    vector<int> ones_count(k, 0);
    
    // Distribute the '1's into their respective k-chains
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones_count[i % k]++;
        }
    }
    
    // Check if every independent chain has an even number of '1's
    bool possible = true;
    for (int r = 0; r < k; r++) {
        if (ones_count[r] % 2 != 0) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}


int solve01() { //works but %^&*#

    int n,k;
    cin>>n;
    cin>>k;
    string str;
    cin>>str;
    int initial_ones = 0;
    for (int j = 0; j < n; j++) {
        if (str[j] == '1') initial_ones++;
    }
    if (initial_ones == 0) {
        cout << "YES\n";
        return 0;
    }
    bool allzero=false;
    for(int i=0;i<(n-k);i++){
        if(str[i]=='0'){
            str[i]='1';
        }else{
            str[i]='0';
        }
        if(str[i+k]=='0'){
            str[i+k]='1';
        }else{
            str[i+k]='0';
        }

        int co=0;
        for(int j=0;j<n;j++){
            if(str[j]=='1') co++;
        }
        if(co==0){ 
            cout<<"YES\n";
            allzero=true;
            break;
        }  
        
    }
    if(!allzero) cout<<"NO\n";

}

int main(){
        int t;
    cin>>t;
    while (t--){
        solve01();
    }
}



