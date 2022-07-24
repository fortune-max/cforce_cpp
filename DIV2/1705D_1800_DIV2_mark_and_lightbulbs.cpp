//
// Created by fme on 24/07/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

int n; string s1, s2;
vector<int> s1_prfx_sum, s2_prfx_sum;

int fn(int i1, int i2, int j1, int j2){
    int grid = 2 * (max(i2, j2) - min(i1, j1) + 1);
    int switched_on_top = s1_prfx_sum[i2+1] - s1_prfx_sum[i1];
    int switched_on_btm = s2_prfx_sum[j2+1] - s2_prfx_sum[j1];
    return grid - switched_on_btm - switched_on_top;
}

signed main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s1 >> s2;
        if (s1[0] != s2[0] or s1[n-1] != s2[n-1]){ cout << -1 << endl; continue; }
        s1 += "010", s2 += "010", n+=2;
        s1_prfx_sum.clear(), s2_prfx_sum.clear();
        s1_prfx_sum.push_back(0), s2_prfx_sum.push_back(0);
        for (int i=0; i<s1.length(); i++) s1_prfx_sum.push_back(s1_prfx_sum[i]+s1[i]-'0');
        for (int i=0; i<s2.length(); i++) s2_prfx_sum.push_back(s2_prfx_sum[i]+s2[i]-'0'); // 1-idx
        int i1, i2(0), j1, j2(0), ans(0);
        while (i2+1<n and j2+1<n){
            // jump over zeros, establish lower limit for i & j
            for (i1=i2; i1<n && s1[i1]=='0'; i1++);
            for (j1=j2; j1<n && s2[j1]=='0'; j1++);
            // extend as far as possible to get upper lim for i & j, contiguous 1's
            for (i2=i1; i2+1<n && s1[i2+1]=='1'; i2++);
            for (j2=j1; j2+1<n && s2[j2+1]=='1'; j2++);
            ans += fn(i1, i2, j1, j2);
            i2++, j2++;
        }
        cout << ((i2!=j2)?-1:ans) << endl;
    }
}