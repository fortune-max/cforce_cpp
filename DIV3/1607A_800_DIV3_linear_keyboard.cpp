#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string kbd, s;
        int char_map[126] = {0}, total=0;
        cin >> kbd >> s;
        for (int i=0;i<26;i++)
            char_map[kbd[i]] = i;
        for(int i=0;i<(size(s)-1);i++){
            char curr=s[i], nxt=s[i+1];
            total += abs(char_map[nxt] - char_map[curr]);
        }
        cout << total << endl;
    }
}