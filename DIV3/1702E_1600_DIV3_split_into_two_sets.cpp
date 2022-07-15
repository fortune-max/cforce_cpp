//
// Created by fme on 10/07/2022.
//

#include <bits/stdc++.h>
using namespace std;

struct domino{
    int top, bottom, bucket;
    bool top_is_idx;
};

signed main(){
    int t; cin >> t;
    while(t--){
        int n, top, bottom, impossible=0; cin >> n;
        vector<int> taken(n+2, 2); taken[0] = 2, taken[n+1] = 0;
        map<int, pair<domino, domino>> dominos;
        for (int i=0; i<n; i++){
            cin >> top >> bottom;
            if (top == bottom) impossible = true;
            taken[top]--, taken[bottom]--;
            if (taken[top] < 0 or taken[bottom] < 0) impossible = true;
            if (dominos[top].first.top==0) dominos[top].first = domino{top, bottom, 0, true};
            else dominos[top].second = domino{top, bottom, 0, true};
            if (dominos[bottom].first.top==0) dominos[bottom].first = domino{top, bottom, 0, false};
            else dominos[bottom].second = domino{top, bottom, 0, false};
        }
        int taken_idx = 1;
        while (!impossible and taken_idx <= n){
            if (taken[taken_idx] == 2) taken_idx++;
            else {
                domino *cand, *cand_dupl;
                if (dominos[taken_idx].first.bucket == 0) cand = &dominos[taken_idx].first;
                else cand = &dominos[taken_idx].second;
                int mirror = cand->top_is_idx?cand->bottom:cand->top;
                if (dominos[mirror].first.top == cand->top and dominos[mirror].first.bottom == cand->bottom) cand_dupl = &dominos[mirror].first;
                else cand_dupl = &dominos[mirror].second;
                int real = cand->top_is_idx?cand->top:cand->bottom;
                taken[real]++, taken[mirror]++, cand->bucket = 1, cand_dupl->bucket = 1;
                if (taken[mirror] == 2){ impossible = true; break;}
                if (dominos[mirror].first.bucket == 0) cand = &dominos[mirror].first;
                else cand = &dominos[mirror].second;
                real = cand->top_is_idx?cand->top:cand->bottom;
                mirror = cand->top_is_idx?cand->bottom:cand->top;
                if (dominos[mirror].first.top == cand->top and dominos[mirror].first.bottom == cand->bottom) cand_dupl = &dominos[mirror].first;
                else cand_dupl = &dominos[mirror].second;
                taken[real]++, taken[mirror]++, cand->bucket = 2, cand_dupl->bucket = 2;
                taken_idx = cand->top_is_idx?cand->bottom:cand->top;
            }
            if (taken_idx == n+1)
                for (taken_idx = 1; taken_idx<=n+1 && taken[taken_idx]==2; taken_idx++);
        }
        cout << (impossible?"NO":"YES") << endl;
    }
}