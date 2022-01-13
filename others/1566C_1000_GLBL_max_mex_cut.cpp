#include <bits/stdc++.h>
using namespace std;

auto mex_single = [](int a, int b){return a==b?not (a-'0'):2;};

int main(){
    int t, ans; cin >> t;
    while(t--){
        int n, ans=0; string row_1, row_2; cin >> n >> row_1 >> row_2;
        vector<int> score_single(n+1, 0), score_double(n, 0);
        for (int i=0; i<n; i++)
            score_single[i] = mex_single(row_1[i], row_2[i]);
        for (int i=0; i<n-1; i++){
            int mx_val = max( max( max(row_1[i], row_1[i+1]), row_2[i]), row_2[i+1]);
            int mn_val = min( min( min(row_1[i], row_1[i+1]), row_2[i]), row_2[i+1]);
            score_double[i] = mex_single(mx_val, mn_val);
        }
        for (int i=0; i<n; i++){
            int ans_sngl = score_single[i] + score_single[i+1], ans_dbl = score_double[i];
            if (ans_sngl >= ans_dbl) ans += score_single[i];
            else ans += ans_dbl, i++;
        }
        cout << ans << endl;
    }
}