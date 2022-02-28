//
// Created by fme on 28/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i; string txt; getline(cin, txt);
    for(i=txt.size()-1; not isalnum(txt[i]); i--);

    string vowels = "aAeEiIoOuUyY";
    if (find(vowels.begin(), vowels.end(), txt[i]) != vowels.end())
        cout << "YES" << endl;
    else cout << "NO" << endl;
}