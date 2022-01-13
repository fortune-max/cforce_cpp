#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string txt; cin >> txt;
        vector <int> freq(3);
        for (auto c: txt) freq[c-'A']++;
        freq[1] -= (freq[0] + freq[2]);
        cout << (freq[1]==0?"YES":"NO") << endl;
    }
}