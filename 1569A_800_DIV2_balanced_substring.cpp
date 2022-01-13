#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; string txt; cin >> n >> txt;
        int l, r, ab_idx = txt.find("ab"), ba_idx = txt.find("ba");
        if (ab_idx != -1)
            l = ab_idx + 1, r = ab_idx + 2;
        else if (ba_idx != -1)
            l = ba_idx + 1, r = ba_idx + 2;
        else
            l = -1, r = -1;
        cout << l << " " << r << endl;
    }
}