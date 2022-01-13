#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while (n--){
        string txt; cin >> txt;
        cout << ((count(txt.begin(), txt.end(), 'B') * 2 == txt.size()) ? "YES\n":"NO\n");
    }
}