#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,one,two,three;
    cin >> t;
    while(t--){
        cin >> one >> two >> three;
        if (three%2){
            one--; two++;
        }
        if (two%2)
            one += 2;
        cout << one%2 << endl;
    }
}