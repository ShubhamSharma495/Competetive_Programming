#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(long long num) {
    if (num < 0) return false;
    string s = to_string(num);
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) return false;
    }
    return true;
}
//method 2;
void solve() {
    long long n;
    cin >> n;
    
    // Step 1: Find the remainder of n when divided by 12
    int remainder = n % 12;
    
    // Step 2: Map each remainder (0 to 11) to a reliable small palindrome
    // Index 0 -> 0, Index 1 -> 1 ... Index 10 -> 22, Index 11 -> 11
    long long small_palindromes[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};
    
    long long a = small_palindromes[remainder];
    
    // Step 3: Verify if n is large enough to subtract this palindrome
    if (n >= a) {
        long long b = n - a;
        cout << a << " " << b << "\n";
    } else {
        cout << -1 << "\n";
    }
}


int main() {

    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin >> n;
        
        if (isPalindrome(n)) { 
            cout << n << " " << 0 << "\n"; 
            continue; 
        }
        
        long long x = -1, y = -1;
        bool isfound = false;
        
        for (long long i = 12; i < n&&i<2400LL; i += 12) {
            long long a = n - i;
            if (isPalindrome(a)) {
                x = a;
                y = i;
                isfound = true;
                break; 
            }
        }
        if (!isfound) {
            for (long long a = 0; a < n && a <= 2000LL; a++) {
                if ((n - a) % 12 == 0 && isPalindrome(a)) {
                    x = a;
                    y = n - a;
                    isfound = true;
                    break;
                }
            }
        }
        
        if (isfound) {
            cout << x << " " << y << "\n";
        } else {
            cout << -1<< "\n"; 
        }
    }
    return 0;
}