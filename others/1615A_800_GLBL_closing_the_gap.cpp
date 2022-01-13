#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        long long total = accumulate(nums.begin(), nums.end(), 0L);
        if (total%n==0) cout << 0 << endl;
        else cout << 1 << endl;
    }
}