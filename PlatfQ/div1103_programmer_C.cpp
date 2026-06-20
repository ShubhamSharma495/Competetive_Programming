#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int solve() {
    int a,b,x;
    cin>>a >>b >>x;
    if (a == b) return 0;
    
    long long min_total_steps = abs(a - b);
    
    int div_a_count = 0;
    int temp_a = a;
    
    while (true) {
        int div_b_count = 0;
        int temp_b = b;
        
        while (true) {
            long long current_steps = div_a_count + div_b_count + abs(temp_a - temp_b);
            
            min_total_steps = min(min_total_steps, current_steps);
            
            if (temp_b == 0) break;
            temp_b /= x;
            div_b_count++;
        }
        
        if (temp_a == 0) break; 
        temp_a /= x;
        div_a_count++;
    }
    
    return min_total_steps;
}

int main() {
    int t;
    cin>> t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}


