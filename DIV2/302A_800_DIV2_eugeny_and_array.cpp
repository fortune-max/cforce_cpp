//
// Created by fme on 27/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n, m, tmp; cin >> n >> m;
    vector<int> freq(3);
    for (int i=0; i<n; i++) cin >> tmp, freq[tmp+1]++; //-1=idx 0, 1=idx 2;
    for (int i=0; i<m; i++){
        int l, r; cin >> l >> r;
        if ((r-l+1)%2) cout << 0 << endl;
        else {
            int hlf = (r-l+1)/2;
            if (freq[0]>=hlf && freq[2]>=hlf) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

}