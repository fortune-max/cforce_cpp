#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        string txt;
        cin >> txt;
        auto mn = min_element(txt.begin(), txt.end());
        char a = *mn;
        txt.erase(mn-txt.begin(), 1);
        cout << a << ' ' << txt << endl;
    }
}