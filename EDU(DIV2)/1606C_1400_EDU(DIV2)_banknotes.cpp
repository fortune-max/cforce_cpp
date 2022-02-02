#include <bits/stdc++.h>
using namespace std;
 
long long e(int base = 1, int pwr = 0){
    return stoll(to_string(base) + string(pwr, '0'));
}

int main(){
    int t; cin >> t;
    while(t--){
        long long k, ans = 0; int n, tmp; cin >> n >> k; k++;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> tmp, nums[i] = tmp;
        for (int i=0; i<19; i++){
            int less = *(upper_bound(nums.begin(), nums.end(), i) - 1);
            int note_multiplier = i - less;
            int note_deduct = min(k, e(9, note_multiplier));
            k -= note_deduct;
            ans += e(note_deduct, less);
        }
        cout << ans << endl;
    }
}