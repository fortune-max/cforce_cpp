//
// Created by fme on 15/07/2022.
//

#include <bits/stdc++.h>
using namespace std;

bool sort_char(pair<char, int> i1, pair<char, int> i2){return (i1.first < i2.first);}
bool sort_int(pair<char, int> i1, pair<char, int> i2){return (i1.second < i2.second);}

signed main(){
    int t; cin >> t;
    while(t--){
        string txt; int p; cin >> txt >> p;
        int n = txt.length(), w = 0;
        vector<pair<char, int>> char_int;
        for (int i=0; i<n; i++){
            auto c = txt[i];
            char_int.emplace_back(c, i);
            w += c - 'a' + 1;
        }
        std::sort(char_int.begin(), char_int.end(), sort_char); // sorted by char
        auto idx = char_int.size() - 1;
        while (idx >= 0 and w-p>0){
            w -= char_int[idx].first - 'a' + 1;
            char_int[idx].second = INT_MAX;
            idx--;
        }
        std::sort(char_int.begin(), char_int.end(), sort_int); // sorted by int
        for (auto [x,z]: char_int){
            if (z == INT_MAX) break;
            cout << x;
        }
        cout << endl;
    }
}
