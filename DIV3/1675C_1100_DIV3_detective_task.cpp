//
// Created by fme on 05/05/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt; int n = txt.length(), ans = 0;
        int last_one_idx = txt.rfind('1'), first_zero_idx = txt.find('0');
        last_one_idx = (last_one_idx == string::npos)?INT_MIN:last_one_idx;
        first_zero_idx = (first_zero_idx == string::npos)?INT_MAX:first_zero_idx;
        
        for (int idx = 0; idx < n; idx++){
            char c = txt[idx];
            if (c == '1' and idx == last_one_idx) ans++;
            else if (c == '0' and last_one_idx < idx and idx == first_zero_idx) ans++;
            else if (c == '?' and last_one_idx < idx and idx < first_zero_idx) ans++;
        }
        cout << ans << endl;
    }
}