#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, tmp;
    cin >> t;
    while(t--){
        cin >> n;
        deque<int> dq;
        while(n--){
            cin >> tmp;
            if (size(dq)==0 || tmp < dq[0])
                dq.push_front(tmp);
            else
                dq.push_back(tmp);
        }
        for (auto a: dq) cout << a << " ";
        cout << endl;
    }
}