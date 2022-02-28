//
// Created by fme on 28/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int mn_base = max(*max_element(a.begin(), a.end()), *max_element(b.begin(), b.end())) - '0' + 1;
    reverse(a.begin(), a.end()), reverse(b.begin(), b.end());
    int a_bs_mn = 0, b_bs_mn = 0;
    for (int i=0; i<a.size(); i++) a_bs_mn += (a[i]-'0') * pow(mn_base, i);
    for (int i=0; i<b.size(); i++) b_bs_mn += (b[i]-'0') * pow(mn_base, i);
    int bs_10_sum = a_bs_mn + b_bs_mn, ans = 0;
    while (bs_10_sum)
        bs_10_sum/=mn_base, ans++;
    cout << ans << endl;
}