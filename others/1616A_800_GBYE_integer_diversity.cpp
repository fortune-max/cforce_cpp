#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> freq(101, 0);
        for (int i=0; i<n; i++){
            int tmp; cin >> tmp;
            freq[abs(tmp)] = abs(tmp)==0?1:min(2, freq[abs(tmp)]+1);
        }
        cout << accumulate(freq.begin(), freq.end(), 0) << endl;
    }
}