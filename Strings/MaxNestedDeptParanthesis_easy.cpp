#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int cnt=0;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                cnt++;
                if(cnt>ans){
                    ans=cnt;
                }
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s = "(1+(2*3)+((8)/4))+1";
    int result = sol.maxDepth(s);
    cout << "Max Depth: " << result << endl;
    return 0;
}