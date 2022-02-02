#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, j, removed=0; cin >> n;
        vector<int> nums(n), num_bck(n);
        for (int i=0; i<n;i++) cin >> nums[i];
        for (int i=n-1;i>=0;i--){
            for (j=i+2; j && (nums[i]%j==0);j--);
            num_bck[i] = i-(j-2);
        }
        for (auto c: num_bck){
            if (c <= removed and c >= 0) removed++;
            else break;
        }
        cout << (removed == n ? "YES":"NO") << endl;
    }
}