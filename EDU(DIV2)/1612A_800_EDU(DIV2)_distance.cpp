#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        int total = x+y, diff = abs(x-y), hlf = total/2;
        if (total%2)
            cout << "-1 -1" << endl;
        else if (x>y)
            cout << diff/2 << " " << hlf - diff/2 << endl;
        else
            cout << hlf - diff/2 << " " << diff/2 << endl;
    }
}