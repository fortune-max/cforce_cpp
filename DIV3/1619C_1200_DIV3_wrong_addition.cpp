#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string a, s; cin >> a >> s;
        int a_idx = a.size()-1, s_idx = s.size()-1;
        string b = "";
        while(s_idx>=0){
            int a_digit = a[a_idx]-'0';
            int s_digit = s[s_idx]-'0';
            if (a_idx < 0) a_digit = 0;
            if (s_digit<a_digit){
                s_digit = s_digit + (s[s_idx-1]-'0')*10;
                s_idx--;
            }
            b += to_string(s_digit - a_digit);
            a_idx--; s_idx--;
        }
        string ans = "", ans_2 = "";
        bool out = b[b.size()-1] != '0';
        for (int i=b.size()-1; i>=0; i--){
            if (out){ans += b[i]; ans_2 += b[i];}
            else out = b[i-1] != '0';
        }
        string total = "";
        while (ans.size()>a.size()) a = "0" + a;
        while (a.size()>ans.size()) ans = "0" + ans;
        for (int i=a.size()-1; i>=0; i--){
            int sum_ab = (a[i]-'0') + (ans[i]-'0');
            total = to_string(sum_ab) + total;
        }

       if (total == s) cout << ans_2 << endl;
        else cout << -1 << endl;
    }
}