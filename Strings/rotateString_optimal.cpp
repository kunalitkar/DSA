#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool rotateString(string& s, string& goal) {
        string summ= s+s;
        int n= s.size()-1;
        for(int i=0; i<=n ; i++){
            string ans=summ.substr(i,n+1);
            if(ans==goal){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    string s = "rotation";
    string goal = "tionrota";
    cout << (sol.rotateString(s, goal) ? "true" : "false") << endl;

    return 0;
}