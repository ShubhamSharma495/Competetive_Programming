#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) { 
        int n;
        cin >> n;
        
        vector<int> heights(n); 
        int max_val = -2e9; 
        
        
        for (int i = 0; i < n; i++) {
            cin >> heights[i]; 
            if (heights[i] > max_val) {
                max_val = heights[i];
            }
        }
        
        int max_k = 0; 
        
        for (int i = 0; i < n; i++) {
            int k = max_val - heights[i] + 1; 
            
            if (k > max_k) {
                max_k = k;
            }
        }
        
        
        cout << max_k << "\n";      
    }
    
    return 0;
}