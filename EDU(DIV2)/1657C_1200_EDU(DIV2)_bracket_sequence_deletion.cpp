//
// Created by fme on 29/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--) {
        int n; string txt; cin >> n >> txt;
        int idx = 0, c = 0, r = n;
        while (idx < n){
            char start = txt[idx]; int prfx_sum=start=='('?1:-1; bool good = prfx_sum>=0; idx++;
            for (;prfx_sum += txt[idx]=='('?1:-1, good &= prfx_sum>=0, idx < n and not(start==txt[idx] or (prfx_sum==0 and good));idx++);
            if (idx < n) c++, idx++, r = n - idx;
        }
        cout << c << " " << r << endl;
    }
}