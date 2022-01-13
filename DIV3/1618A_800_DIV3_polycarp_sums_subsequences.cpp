#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        vector<int> nums(7);
        for(int i=0;i<7;i++) cin >> nums[i];
        int a = nums[0], bc = nums[5], ca = nums[4], c = ca - a, b = bc - c;
        cout << a << " " << b << " " << c << endl;
    }
}