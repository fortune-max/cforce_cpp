#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ans; cin >> t;
    while(t--){
        int n; cin >> n;
        int row = ceil(pow(n, 0.5)), row_starter = pow(row-1, 2) + 1, inc = n - row_starter;
        if (0 <= inc and inc < row) cout << inc + 1 << " " << row << endl;
        else cout << row << " " << pow(row, 2) + 1 - n << endl;
    }
}