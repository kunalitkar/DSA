#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans= "";
        int level = 0;
    
        for(char ch:s){
            if(ch=='('){
                if (level > 0) ans += ch;
                level++;  
            }
            else if(ch==')'){
                level--;
                if (level > 0) ans += ch;  
            }
        }
        return ans;
    }
};

int main() {
    string s = "(()())(())";  
    Solution sol;             

    string result = sol.removeOuterParentheses(s);

    cout << "The result is: " << result << endl;

    return 0;
}