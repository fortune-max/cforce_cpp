#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t; cin >> t;
    while(t--){
        int n, final_ans = INT_MAX; cin >> n;
        vector <int> nums(n); set <pair<double, double>> lines;
        for (int i=0; i<n; i++) cin >> nums[i];

        for (int i=0; i<n-1; i++){
            for (double j=i+1; j<n; j++){
                double slope = (nums[j] - nums[i])/(j - i), intercept = nums[j] - slope * j;
                lines.insert({slope, intercept});
            }
        }

        for (auto mc: lines){
            double slope = mc.first, intercept = mc.second; int ans = 0;
            for (int i=0; i<n; i++){
                double expected_y = slope * i + intercept; int y = nums[i];
                if (abs(expected_y - y) > 0.00001) ans++;
            }
            final_ans = min(ans, final_ans);
        }
        cout << (n==1?0:final_ans) << endl;
    }
}
