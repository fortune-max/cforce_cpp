//
// Created by fme on 10/07/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt; int ct = 0, n = txt.length();
        deque<char> store{' ', ' ', ' '};
        for (int i=0; i<n; i++){
            auto c = txt[i];
            if (c == store[0] || c == store[1] || c == store[2]) continue;
            else{
                if (store[0] == ' ' || ' ' == store[1] || ' ' == store[2]){
                    store.pop_front();
                    store.push_back(c);
                }
                else{
                    store = deque<char>{' ', ' ', c};
                    ct += 1;
                };
            }
        }
        if (store[2] != ' ') ct += 1;
        cout << ct << endl;
    }
}