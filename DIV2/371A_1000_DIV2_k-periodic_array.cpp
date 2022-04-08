//
// Created by fme on 13/11/2021.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, nk, tmp, ans=0;
    cin >> n >> k;
    nk = n/k;
    vector <int> ones(k, 0), twos(k, 0);
    for (int i=0;i<nk;i++){
        for(int j=0;j<k;j++){
            cin >> tmp;
            ones[j] += tmp == 1 ? 1:0;
            twos[j] += tmp == 2 ? 1:0;
        }
    }
    for (int i=0;i<k;i++)
        ans += nk - max(ones[i], twos[i]);
    cout << ans << endl;
}
