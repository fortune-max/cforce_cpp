//
// Created by fme on 06/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, tmp, l_index = INT_MAX, r_index = INT_MIN; cin >> n;
        for (int i=0; i<n; i++){
            cin >> tmp;
            if (tmp == 0)
                l_index = min(l_index, i), r_index = max(r_index, i);
        }
        cout << (l_index==INT_MAX?0:(r_index+1)-(l_index-1)) << endl;
    }
}