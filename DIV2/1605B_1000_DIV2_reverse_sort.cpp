#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, ans=0; cin >> n;
        string tmp; cin >> tmp;
        vector<int> nums, nums_srt;
        for (auto c: tmp){
            nums.push_back(c-'0');
            nums_srt.push_back(c-'0');
        }
        sort(nums_srt.begin(), nums_srt.end());
        vector <int> ans_idx;
        for(int i=0;i<n;i++){
            if (nums_srt[i] != nums[i]){
                ans++;
                ans_idx.push_back(i+1);
            }
        }
        cout << (ans?1:0) << endl;
        if (ans != 0){
            cout << ans << " ";
            for(auto j: ans_idx)
                cout << j << " ";
            cout << endl;
        }
    }
}