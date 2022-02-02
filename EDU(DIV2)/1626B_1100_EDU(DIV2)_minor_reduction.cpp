using namespace std;
#include <bits/stdc++.h>
 
int main(){
    int n, t, i, total; cin >> t;
    while(t--){
        string txt, ans; cin >> txt; n = txt.size();
        for (i = n-2; i>=0; i--){
            total = txt[i] + txt[i+1];
            if (total >= 106){
                ans = string({'1', total-106+'0'});
                break;
            }
        }
        if (not ans.size())
            i=0, ans += (txt[0] + txt[1] - '0');
        cout << txt.substr(0, i) << ans << txt.substr(i+2) << endl;
    }
}