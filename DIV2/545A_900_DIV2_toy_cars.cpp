//
// Created by fme on 26/02/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp; cin >> n;
    vector<int> ans;
    for (int i=1; i<=n; i++){
        bool good = true;
        for(int j=0; j<n; j++){
            cin >> tmp;
            good &= (tmp==2 or tmp==0 or tmp==-1);
        }
        if (good) ans.push_back(i);
    }

    cout << ans.size() << endl;
    if (ans.empty()) {
        for (auto c: ans) cout << c << " ";
        cout << endl;
    }

}