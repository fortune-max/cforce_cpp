//
// Created by fme on 09/04/2022.
//

#include <bits/stdc++.h>
using namespace std;

int steps(int x){
    if (x==0) return 0;
    // return -__builtin_ctz(x) + 15;
    int step_ct = 0;
    while (x % 2 == 0)
        x /= 2, step_ct -= 1;
    return step_ct + 15;
}

int main(){
    int n, tmp; cin >> n;
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        cin >> tmp; int min_step = INT_MAX;
        for(int j=0; j<16; j++)
            min_step = min(min_step, steps(tmp+j) + j);
        cout << min_step << " ";
    } cout << endl;
}