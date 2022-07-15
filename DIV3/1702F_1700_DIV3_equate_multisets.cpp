//
// Created by fme on 11/07/2022.
//

#include <bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, tmp, ok=1; cin >> n;
        vector<int> a(n); priority_queue<int> b;
        for (int i=0; i<n; i++){
            cin >> a[i];
            while (a[i]%2==0) a[i]/=2;
        }
        for (int i=0; i<n; i++){
            cin >> tmp;
            while (tmp%2==0) tmp/=2;
            b.push(tmp);
        }
        std::sort(a.rbegin(), a.rend());

        for (auto a_sub: a){
            while (ok){
                auto b_sub = b.top();
                if (a_sub > b_sub) ok = 0;
                else if (a_sub < b_sub){
                    b.pop();
                    b.push(b_sub/2);
                }
                else { b.pop(); break; }
            }
            if (!ok) break;
        }
        cout << (ok?"YES":"NO") << endl;
    }
}