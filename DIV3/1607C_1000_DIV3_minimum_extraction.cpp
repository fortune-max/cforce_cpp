#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> nums(n);
        for(int i=0;i<n;i++) cin >> nums[i];
        sort(nums.rbegin(), nums.rend());
        int run_minus=0, mx_elem = INT_MIN;
        while (nums.size()){
            int last = nums.back();
            mx_elem = max(last - run_minus, mx_elem);
            run_minus += last - run_minus;
            nums.pop_back();
        }
        cout << mx_elem << endl;
    }
}