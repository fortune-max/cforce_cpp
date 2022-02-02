#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, tmp, tmp_ans, ans=0; cin >> n;
        vector< vector<int> > pos(150001);
        for (int i=1; i<n+1; i++)
            cin >> tmp, pos[tmp].push_back(i);
        
        for (int i=1; i<150001; i++){
            if (size(pos[i]) >= 2){
                for (int j=0; j < size(pos[i])-1; j++){
                    tmp_ans = tmp_ans = n - pos[i][j+1] + pos[i][j];
                    ans = max(tmp_ans, ans);
                }
            }
        }
        cout << (ans?ans:-1) << endl;
    }
}