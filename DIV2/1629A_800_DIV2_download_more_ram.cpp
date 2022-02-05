#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, curr_ram, tmp; cin >> n >> curr_ram;
        vector< pair<int, int> > size_idx(n); vector<int> rams(n);
        for (int i=0; i<n; i++) cin >> tmp, size_idx[i] = pair<int, int>(tmp, i);
        sort(size_idx.begin(), size_idx.end());
        for (int i=0; i<n; i++) cin >> rams[i];
        for (auto c: size_idx){
            int dl_size = c.first, dl_idx = c.second;
            if (dl_size<=curr_ram) curr_ram += rams[dl_idx];
            else break;
        }
        cout << curr_ram << endl;
    }
}