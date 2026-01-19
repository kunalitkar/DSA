#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
                int sum=0;
        int n=s.size();
        for(int j=0; j<n; j++){
            vector<int> freq(26, 0);

            for(int i=j; i<n; i++){
                freq[s[i] - 'a']++;

                int maxi = 0;
                int mini = INT_MAX;
                for (auto it : freq) {
                    if(it>0){
                        mini = min(mini,it);
                        maxi = max(maxi,it);
                    }
                }
                sum += (maxi - mini);

            }
        }
        return sum;

    }
};

int main() {
    Solution sol;
    string s = "xyx";
    cout << "Beauty Sum: " << sol.beautySum(s) << endl;
    return 0;
}