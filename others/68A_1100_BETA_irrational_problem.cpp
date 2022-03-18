//
// Created by fme on 18/03/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int p1, p2, p3, p4, a, b, ans = 0;
    cin >> p1 >> p2 >> p3 >> p4 >> a >> b;
    for (int x=a; x<=b; x++){
        int count = 0;
        vector<int> init_config = {p1, p2, p3, p4};
        do{
            int fx = ((((x%init_config[0]) % init_config[1]) % init_config[2]) % init_config[3]);
            count += fx == x;
        } while (next_permutation(init_config.begin(), init_config.end()));
        if (count) ans++;
    }
    cout << ans << endl;
}