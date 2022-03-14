//
// Created by fme on 12/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

auto ceil_2 = [](int num, int div){return num/div + bool(num % div);};

int main(){
    int n, d, ans = 0; cin >> n >> d;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> nums[i];
        if (i>0) {
            auto prev = &nums[i - 1], curr = &nums[i];
            if (*curr <= *prev) {
                int to_add = ceil_2((*prev - *curr + 1), d);
                ans += to_add, *curr += to_add * d;
            }
        }
    }
    cout << ans << endl;
}