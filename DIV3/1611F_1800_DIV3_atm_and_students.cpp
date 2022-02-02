#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin >> t;
    while(t--){
        priority_queue <tuple<long long, long long, long long>> ans; //score, left, right
        long long n, s, tmp, l = 1, r = 1; cin >> n >> s;
        vector<long long> deposit = {0}, withdraw = {0};
        for(long long i=1; i<=n; i++){
            cin >> tmp;
            deposit.push_back(deposit.back() + max(tmp, 0LL));
            withdraw.push_back(withdraw.back() + abs(min(tmp, 0LL)));
        }
        while (l<=r && r<=n){
            long long deps = deposit[r] - deposit[l-1] + s, wdrl = withdraw[r] - withdraw[l-1];
            if (wdrl > deps){
                if (l==r) l++, r++;
                else l++;
            }
            else ans.push({r-l+1, l, r}), r++;
        }
        if (ans.size()){
            long long ans_l = get<1>(ans.top()), ans_r = get<2>(ans.top());
            cout << ans_l << " " << ans_r << endl;
        } else cout << -1 << endl;
    }
}