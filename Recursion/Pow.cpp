#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        return power(x, N);
    }

private:
    double power(double x, long long n) {
        if (n == 0) return 1;

        double half = power(x, n / 2);

        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }
};


int main() {
    Solution sol;
    double x = 2.0;
    int n = 10;

    // Calculate x raised to n
    double result = sol.myPow(x, n);

    // Print the result
    std::cout << x << "^" << n << " = " << result << std::endl;

    return 0;
}