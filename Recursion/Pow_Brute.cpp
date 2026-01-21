#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        // Base case: any number to the power of 0 is 1
        if (n == 0 || x == 1.0) return 1; 
        
        long long temp = n; // to avoid integer overflow
        
        // Handle negative exponents
        if (n < 0) { 
            x = 1 / x;
            temp = -1*1LL*n;
        }

        double ans = 1;

        for (long long i = 0; i < temp; i++) {
            // Multiply ans by x for n times
            ans *= x; 
        }
        return ans;
    }
};

int main() {
    Solution sol;
    // Output: 1024.0000
    printf("%.4f\n", sol.myPow(2.0000, 10));
    // Output: 0.2500 
    printf("%.4f\n", sol.myPow(2.0000, -2)); 
    return 0;
}