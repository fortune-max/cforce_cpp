#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ans; cin >> t;
    while(t--){
        string txt; cin >> txt;
        vector <int> freq(26, 0);
        for (auto c: txt) freq[c-'a']++;
        string doubles = "", singles = "";
        for (int i=0; i<26; i++){
            if (freq[i] == 2) doubles += (char) i+'a';
            else if(freq[i] == 1) singles += (char) i+'a';
        }
        cout << doubles << doubles << singles << endl;
    }
}