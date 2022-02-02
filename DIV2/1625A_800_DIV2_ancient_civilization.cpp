#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n, l, final_ans=0; cin >> n >> l;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        for(int i=0; i<l; i++){
            int ans = 0;
            for(int j=0; j<n; j++){
                if(nums[j] & (1<<i)) ans++;
                else ans--;
            }
            final_ans += ((ans>0)<<i);
        }
        cout << final_ans << endl;
    }
}