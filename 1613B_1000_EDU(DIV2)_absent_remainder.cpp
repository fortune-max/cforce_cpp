#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> nums (n);
        for (int i=0;i<n;i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        int ans = n/2;
        for (int i=n-1;i>0 && ans;i--){
            cout << nums[i] << " " << nums[0] << endl;
            ans--;
        }
    }
}