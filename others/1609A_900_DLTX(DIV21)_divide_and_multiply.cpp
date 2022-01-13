#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0;i<n;i++) cin >> nums[i];
        int total_two_pow = 0, num_sum = 0;
        for (int i=0;i<n;i++){
            while(nums[i]%2==0){
                nums[i]/=2;
                total_two_pow++;
            }
            num_sum += nums[i];
        }
        long long ans = 0;
        for (int i=0;i<n;i++){
            long long tmp = pow(2, total_two_pow) * nums[i] + num_sum - nums[i];
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }
}