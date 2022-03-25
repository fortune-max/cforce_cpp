//
// Created by fme on 23/03/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t; cin >> t;
    while(t--){
        int n, B, x, y; cin >> n >> B >> x >> y;
        int ans_1 = x<=B?x:-y, ans_2 = -y, ANS_1 = ans_1, ANS_2 = -y;
        for (int i=2; i<=n; i++){
            if (ans_1+x>B) ans_1 -= y;
            else ans_1 += x;
            ANS_1 += ans_1;
        }
        for (int i=2; i<=n; i++){
            if (ans_2+x>B) ans_2 -= y;
            else ans_2 += x;
            ANS_2 += ans_2;
        }
        cout << max(ANS_1, ANS_2) << endl;
    }
}