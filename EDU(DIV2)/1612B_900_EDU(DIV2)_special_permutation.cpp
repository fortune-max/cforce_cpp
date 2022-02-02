#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> nums = {a};
        for (int i=n;i>0;i--){
            if (i==a || i==b) continue;
            nums.push_back(i);
        }
        nums.push_back(b);
        int A = *min_element(nums.begin(), nums.begin()+n/2);
        int B = *max_element(nums.rbegin(), nums.rbegin()+n/2);
        if (A == a and B == b){
            for (auto c: nums) cout << c << " ";
            cout << endl;
        } else cout << -1 << endl;
    }
}