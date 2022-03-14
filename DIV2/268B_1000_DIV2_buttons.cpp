//
// Created by fme on 14/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int set_up = 1, remaining = n, ans = 0;
    while (remaining){
        ans += (remaining - 1) * set_up + 1;
        remaining--, set_up++;
    }
    cout << ans << endl;
}