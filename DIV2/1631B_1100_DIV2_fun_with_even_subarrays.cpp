#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        reverse(nums.begin(), nums.end());
        int k, i, ans = 0;
        while (true){
            k = 0;
            for (auto c: nums) if (c==nums[0]) k++; else break;
            for (i=k; (i<min(k*2, n)) && (nums[i]==nums[0]); i++);
            if (i == min(k*2, n)){
                k*=2;
                if (k>n) break;
            }
            else{
                for(i=k; i<min(k*2, n); i++)
                    nums[i] = nums[0];
                ans++;
            }
        }
        cout << ans << endl;
    }
}