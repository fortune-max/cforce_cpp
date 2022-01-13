#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> nums(n);
        for(int i=0;i<n;i++) cin >> nums[i];
        if (nums[0] == n || nums[n-1] == n){
            for (int i=n-1;i>=0;i--) if (nums[i] != n) cout << nums[i] << " ";
            cout << n;
        }
        else
            cout << -1;
        cout << endl;
    }
}