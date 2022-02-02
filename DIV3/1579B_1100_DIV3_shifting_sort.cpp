#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ans; cin >> t;
    while(t--){
        int n, i, j, k; cin >> n;
        vector<int> nums(n+1, -1000000009), tmp(n+1, -1000000009);
        vector<tuple<int, int, int>> ans;
        for (i=1; i<=n; i++) cin >> nums[i]; i = -1;
        vector<int> nums_ref(nums); sort(nums_ref.begin(), nums_ref.end());
        while (i != n+1){
            for (i=1; i<=n; i++){
                if (nums[i] != nums_ref[i]){
                    for (j=i+1; nums[j]!=nums_ref[i]; j++);
                    ans.push_back(tuple<int, int, int>(i, j, j-i));
                    //cout << i << " " << j << " " << j-i << endl;
                    tmp = vector<int>(n+1, -1000000009);
                    for (k=1; k<i; k++) tmp[k] = nums[k];
                    tmp[i] = nums[j];
                    for (k=i; k<j; k++) tmp[k+1] = nums[k];
                    for (k=j+1;k<=n;k++) tmp[k] = nums[k];
                    for (int k=0; k<=n; k++) nums[k] = tmp[k];
                    break;
                }
            }
        }
        cout << ans.size() << endl;
        for (auto a: ans) cout << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << endl;
    }
}