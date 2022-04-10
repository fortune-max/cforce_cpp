//
// Created by fme on 08/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, tmp, mx_freq = INT_MIN, ans = 0; map<int, int> freq; cin >> n;

        for (int i=0; i<n; i++)
            cin >> tmp, freq[tmp]++, mx_freq = max(mx_freq, freq[tmp]);

        int to_repl = n - mx_freq;
        while (to_repl > 0)
            ans += min(to_repl, mx_freq) + 1, to_repl -= mx_freq, mx_freq *= 2;

        cout << ans << endl;
    }
}