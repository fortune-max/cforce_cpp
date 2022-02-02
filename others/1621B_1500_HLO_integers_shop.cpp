#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        priority_queue< vector<int> > lefts, rights, singles;
        for (int i=0; i<n; i++){
            int l, r, c, curr_cost; cin >> l >> r >> c;
            lefts.push({-l, -c, i}), rights.push({r, -c, i}), singles.push({-l, r, -c});

            int l_ans_l = -lefts.top()[0], l_ans_c = -lefts.top()[1], l_ans_s = lefts.top()[2];
            int r_ans_r = rights.top()[0], r_ans_c = -rights.top()[1], r_ans_s = rights.top()[2];
            int single_ans_l = -singles.top()[0], single_ans_r = singles.top()[1], singles_ans_c = -singles.top()[2];

            int cost_dbl = (l_ans_c + r_ans_c)/((l_ans_s==r_ans_s)+1);
            vector<int> ans = {cost_dbl, INT_MAX};
            if (single_ans_l<=l_ans_l && single_ans_r >= r_ans_r) ans[1] = singles_ans_c;
            cout << *min_element(ans.begin(), ans.end()) << endl;
        }
    }
}