#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, maxi;
        long long ans = 0; 
        cin >> n;

        int arr[n];
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        auto maxx = max_element(arr, arr + n);
        swap(arr[0], *maxx);

        for(int i=0; i<n; i++){
            v.push_back(arr[i]);
            maxi= *max_element(v.begin(), v.end());
            ans += maxi;
        }
        cout << ans << endl;

    }
}