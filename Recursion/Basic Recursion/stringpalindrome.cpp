#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s1, int i, int n){
    if(i >= n/2){
        return false;
    }
    else{
        isPalindrome(s1, i+1 , n-i-1);
        if(s1[i] != s1[n-i-1]){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
    string s1="madama";
    int n = s1.length();
    isPalindrome(s1, 0 ,n);
    if(isPalindrome(s1, 0 , n)== true){
        cout << "The string is a palindrome" << endl;
    }
    else{
        cout << "The string is not a palindrome" << endl;
    }
    return 0;

}

/* chat gpt corrected code

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s1, int i, int n) {
    if (i >= n / 2) {
        return true; // Reached the middle, so it's a palindrome
    }
    if (s1[i] != s1[n - i - 1]) {
        return false; // Characters don't match
    }
    return isPalindrome(s1, i + 1, n); // Recurse inward
}

int main() {
    string s1 = "madama";
    int n = s1.length();

    if (isPalindrome(s1, 0, n)) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }

    return 0;
}

*/