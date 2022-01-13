#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        string s; cin >> s;
        vector< vector<int> > arr_0, arr_1;

        for (int idx=0; idx<n; idx++){
            char val = s[idx];
            if (val == '0') arr_0.push_back({val, nums[idx], idx});
            else arr_1.push_back({val, nums[idx], idx});
        }
        sort(arr_0.begin(), arr_0.end());
        sort(arr_1.begin(), arr_1.end());

        int ct = 1;
        vector <int> ans(n, 0);
        for (int i=0; i<arr_0.size(); i++){
            int a = arr_0[i][0], b = arr_0[i][1], k = arr_0[i][2];
            ans[k] = ct;
            ct++;
        }
        for (int i=0; i<arr_1.size(); i++){
            int a = arr_1[i][0], b = arr_1[i][1], k = arr_1[i][2];
            ans[k] = ct;
            ct++;
        }
        for (auto c: ans) cout << c << " ";
        cout << endl;
    }
}