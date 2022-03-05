//
// Created by fme on 23/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, tmp; cin >> n;
        map<int, int> freq; priority_queue< pair<int, int> > p_freq;
        for (int i=0; i<n; i++) cin >> tmp, freq[tmp]++;
        for (auto [num, occurrence]: freq) p_freq.push({occurrence, num});

        vector<int> ans_s = {n};
        for(int i=0; i<n-1; i++){
            auto [occurrence, num] = p_freq.top();
            if (occurrence >= 2) {
                p_freq.pop();
                p_freq.push({occurrence-1, num});
                ans_s.push_back(ans_s.back()-1);
            }
            else ans_s.push_back(ans_s.back());
        }

        for(auto it=ans_s.rbegin(); it<ans_s.rend(); it++)
            cout << *it << " "; cout << endl;
    }
}
