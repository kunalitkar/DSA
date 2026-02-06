#include<bits/stdc++.h>
using namespace std;
int sum;
void sums(int i, int n){
    for(i=1; i<=n; i++){
        sum += i;
    }  
    cout << "The sum of first " << " natural numbers is: " << sum << endl;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    sums(1, n);
    return 0;
}