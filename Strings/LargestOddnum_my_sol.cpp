#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largeOddNum(string& num) {
        int n= num.size();
        string ans="";
        int i=n-1;
        while(i>=0){
            
            if(i>=0 && (((num[i]-'0')%2)!=0)){
                for(int j=0; j<=i; j++){
                    ans += num[j];
                }
                break;
            }
            else if(i>=0  && ((num[i]%2)==0)){
                i--;
            }

        
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string num = "5045";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}
