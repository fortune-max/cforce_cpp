#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    string txt; cin >> txt;
    vector <int> freq = {0};
    for(auto c: txt) freq.push_back(freq.back()+(c-'`'));
    while (q--){
        int l, r; cin >> l >> r;
        cout << freq[r] - freq[l-1] << endl;
    }
}