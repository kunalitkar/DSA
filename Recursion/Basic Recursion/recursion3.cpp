#include <bits/stdc++.h>
using namespace std;

void number(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
        number(i+1,n);
    }
}
int main(){
    int n = 5;
    number(1,n);
    return 0;
}