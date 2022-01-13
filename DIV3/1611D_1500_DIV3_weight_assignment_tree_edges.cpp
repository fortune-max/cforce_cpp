#include <bits/stdc++.h>
using namespace std;

struct node{
    int id, parent, weight = -1;
};


int main(){
    int t; cin >> t;
    while (t--){
        int n, tmp, ok = 1; cin >> n;
        vector<node> nodes(n+1); vector<int> order(n);

        for (int i=1; i<n+1; i++)
            cin >> tmp, nodes[i].parent = tmp, nodes[i].id = i;
        for (int i=0; i<n; i++)
            cin >> order[i];

        int root_id = order[0], last_weight = 0; nodes[root_id].weight = last_weight;
        //if (nodes[root_id].parent != root_id) ok = 0; // probably no need to check this

        for (int i=1; i<n; i++){
            tmp = order[i];
            if (nodes[nodes[tmp].parent].weight != -1)
                nodes[tmp].weight = ++last_weight;
            else ok = 0;
        }

        if (ok) for (int i=1; i<n+1; i++) cout << (nodes[i].weight - nodes[nodes[i].parent].weight) << " ";
        else cout << -1; cout << endl;
    }
}