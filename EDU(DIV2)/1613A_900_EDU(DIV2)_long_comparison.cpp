#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string p1, p2;
        int x1, x2;
        cin >> p1 >> x1 >> p2 >> x2;
        x1 += p1.size() - 1;
        x2 += p2.size() - 1;
        double P1 = stoi(p1), P2 = stoi(p2);
        P1 /= pow(10, p1.size() - 1);
        P2 /= pow(10, p2.size() - 1);
        if (x1>x2) cout << ">\n";
        else if (x1<x2) cout << "<\n";
        else if (x1 == x2){
            if (P1>P2) cout << ">\n";
            else if (P1<P2) cout << "<\n";
            else cout << "=\n";
        }
    }
}