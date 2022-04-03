//
// Created by fme on 03/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, tmp, ans = INT_MIN; cin >> n >> m;
    for (int i=0; i<n; i++){
        int sub_ans = INT_MAX;
        for (int j=0; j<m; j++)
            cin >> tmp, sub_ans = min(sub_ans, tmp);
        ans = max(ans, sub_ans);
    }
    cout << ans << endl;
}