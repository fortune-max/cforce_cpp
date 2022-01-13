#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin >> t;
    while(t--){
        long long w, h; cin >> w >> h;

        long long k1; cin >> k1; vector<long long> v1(k1);
        for (long long i=0; i<k1; i++) cin >> v1[i];

        long long k2; cin >> k2; vector<long long> v2(k2);
        for (long long i=0; i<k2; i++) cin >> v2[i];

        long long k3; cin >> k3; vector<long long> v3(k3);
        for (long long i=0; i<k3; i++) cin >> v3[i];

        long long k4; cin >> k4; vector<long long> v4(k4);
        for (long long i=0; i<k4; i++) cin >> v4[i];

        long long ans = 0, tmp;
        vector<vector<long long>> v_s = {v1, v2, v3, v4};
        vector <long long> heights = {h, h, w, w};

        for (long long i=0; i<4; i++){
            vector<long long> curr_v = v_s[i];
            long long mn = *min_element(curr_v.begin(), curr_v.end()), mx = *max_element(curr_v.begin(), curr_v.end());
            tmp = (mx - mn) * heights[i];
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }
}