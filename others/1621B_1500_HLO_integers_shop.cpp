#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        struct cost{
           int mn = INT_MAX, mx = INT_MIN;
           int cost_l = INT_MAX, cost_r = INT_MAX;
           int idx_l = -1, idx_r = -1;
        } ans;
        for (int i=0; i<n; i++){
            int l, r, c; cin >> l >> r >> c;
            if (l<ans.mn || r>ans.mx){
                if (l<ans.mn){
                    ans.mn = l, ans.cost_l = c, ans.idx_l = i;
                    if (r==ans.mx) ans.cost_r = c, ans.idx_r = i;
                }
                if (r>ans.mx){
                    ans.mx = r, ans.cost_r = c, ans.idx_r = i;
                    if (l==ans.mn) ans.cost_l = c, ans.idx_l = i;
                }
            }
            else if (l==ans.mn && r==ans.mx){
                int curr_cost = (ans.cost_l+ans.cost_r)/((ans.idx_l==ans.idx_r)+1);
                if (c<curr_cost)
                    ans.cost_l = c, ans.cost_r = c, ans.idx_l = i, ans.idx_r = i;
            }
            int curr_cost = (ans.cost_l+ans.cost_r)/((ans.idx_l==ans.idx_r)+1);
            cout << curr_cost << endl;
        }
    }
}