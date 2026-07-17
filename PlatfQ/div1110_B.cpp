#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
using ll = long long;
const ll INF = 2e18;

ll solve1() {
    int n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for (int i = 0; i < n;i++) cin>>a[i];
    ll score = 0;
    ll i=0;
    while (i<n ) {
        if (i+1 < n && c > min(a[i], a[i+1])) {
            score += max(a[i], a[i+1]) - c;
            i += 2;
        } else {
            score += a[i] - c;
            i++;
        }
    }
    return score;
}
// ai wont work
ll solve2() {
    int n;
    ll c;
    cin >> n >> c;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> dp(n, 0);

    for (int i = 0; i < n; i++) {
        ll opt1 = (i > 0 ? dp[i - 1] : 0) + a[i] - c;
        
        ll opt2 = -1e18;
        if (i > 0) {
            opt2 = (i > 1 ? dp[i - 2] : 0) + max(a[i], a[i - 1]) - c;
        }

        dp[i] = max(opt1, opt2);
    }

    return dp[n - 1];
}

ll solve3() {
    int n; ll c;
    cin >> n >> c;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    vector<ll> dp(n+1, 0);
    for (int i=n-1; i>=0; i--) {
        ll take1 = a[i] - c + dp[i+1];
        ll take2 = LLONG_MIN;
        if (i+1 < n) take2 = max(a[i], a[i+1]) - c + dp[i+2];
        dp[i] = max(take1, take2);
    }
    return dp[0];
}

//end

ll solve4() {
    int n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for (int i = 0; i < n;i++){
        cin>>a[i];
        a[i]-=c;
    }

    ll score = 0;
    sort(a.begin(), a.end(), greater<>{});
    for(int i=0;i<n;i++){
        if(i<(n+1)/2 || a[i]>0){
            score+=a[i];
        }
    }

    return score;
}



int main(){
    int t;
    cin >> t;
    while(t--){
        cout<<solve4()<<"\n";
    }
    return 0;
}
