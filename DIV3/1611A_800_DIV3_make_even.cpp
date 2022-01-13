#include <bits/stdc++.h>
using namespace std;

bool has_even(string num){
    bool is_even = false;
    for (auto c: num)
        is_even |= ((c-'0')%2==0);
    return is_even;
}

int main(){
    int t, ans; cin >> t;
    while(t--){
        string num; cin >> num;
        if (!has_even(num)) ans = -1;
        else if ((num[num.size()-1] - '0')%2==0) ans = 0;
        else{
            if ((num[0]-'0')%2==0) ans = 1;
            else ans = 2;
        }
        cout << ans << endl;
    }
}