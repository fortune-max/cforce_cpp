#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string tmp; cin >> tmp;
        vector<int> a_idx;
        vector<int> a_cnt(n), b_cnt(n), c_cnt(n);
        a_cnt[0] = (tmp[0] == 'a') ? 1:0;
        b_cnt[0] = (tmp[0] == 'b') ? 1:0;
        c_cnt[0] = (tmp[0] == 'c') ? 1:0;
        for(int i=1;i<n;i++){
            if (tmp[i] == 'a')
                a_idx.push_back(i);
            a_cnt[i] = a_cnt[i-1] + ((tmp[i]=='a')?1:0);
            b_cnt[i] = b_cnt[i-1] + ((tmp[i]=='b')?1:0);
            c_cnt[i] = c_cnt[i-1] + ((tmp[i]=='c')?1:0);
        }
        int ans = INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<min(n, i+50);j++){
                int a_freq, b_freq, c_freq;
                a_freq = a_cnt[j] - a_cnt[i] + ((tmp[i]=='a')?1:0);
                b_freq = b_cnt[j] - b_cnt[i] + ((tmp[i]=='b')?1:0);
                c_freq = c_cnt[j] - c_cnt[i] + ((tmp[i]=='c')?1:0);
                if ((a_freq > b_freq) && (a_freq > c_freq))
                    ans = min(ans, j-i+1);
            }
        }
        cout << ((ans==INT_MAX)?-1:ans) << endl;
    }
}