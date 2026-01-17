
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t){
            return true;
        }
        return false;
    }

int main() {

    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";

    if (isAnagram(Str1, Str2)) {
        cout << "True" << endl;  
    } else {
        cout << "False" << endl;  
    }

    return 0;
}
