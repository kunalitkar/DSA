#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string& s) {
          vector<pair<int, char>> freq(128);

        for (int i = 0; i < 128; i++) {
            freq[i] = {0, char(i)};
        }

        for (char c : s) {
            freq[c].first++;
        }

        // sort by frequency DESC
        sort(freq.begin(), freq.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        string ans;
        for (auto &p : freq) {
            ans.append(p.first, p.second);
        }

        return ans;


    }
};

// Main function to test the logic
int main() {
    Solution sol;
    
    // Example input string
    string s = "tree";

    // Get the sorted characters by frequency
    string result= sol.frequencySort(s);

    // Print the result
    for (char c : result) {
        cout << c << " ";
    }

    return 0;
}