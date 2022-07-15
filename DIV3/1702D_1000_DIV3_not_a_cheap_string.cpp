//
// Created by fme on 10/07/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        string txt; int p, w = 0;
        cin >> txt >> p;
        int n = txt.length();
        auto freq = vector<int>(26, 0);
        for (auto c: txt){
            freq[c-'a']++;
            w += c-'a'+1;
        }
        for (int i=25; i>=0; i--){
            freq[i];
            if (w > p) {
                auto to_del = ((w-p)/(i+1)) + bool((w-p) % (i+1));
                w -= min(freq[i], to_del) * (i+1);
                freq[i] -= min(freq[i], to_del);
            }
        }
        for (int i=0; i<n; i++){
            if (freq[txt[i]-'a']){
                freq[txt[i]-'a']--;
                cout << txt[i];
            }
        }
        cout << endl;
    }
}