#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, tmp; cin >> n;
        vector <pair<int, int>> nums(n);
        for(int i=0;i<n;i++){
            cin >> tmp;
            nums[i] = {tmp, i};
        }
        sort(nums.rbegin(), nums.rend());
        vector<int> ans(n);
        int last = 2; long long total = 0;
        for(auto c: nums){
            ans[c.second] = (last%2?-1:1) * (last/2);
            total += 2LL * (last/2) * c.first;
            last++;
        }
        cout << total << "\n0 ";
        for (auto c: ans) cout << c << " ";
        cout << endl;
    }
}