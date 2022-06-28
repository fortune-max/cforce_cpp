//
// Created by fme on 27/06/2022.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n, l, k; cin >> n >> l >> k;
    vector<int> dist(n+1, l), spd(n);
    for (int i=0; i<n; i++) cin >> dist[i];
    for (int i=0; i<n; i++) cin >> spd[i];

    vector<vector<int>> dp(n+1, vector<int>(n, INT_MAX)); // imagine final sign at last city
    dp[0][0] = 0; // time to get to first sign
    for (int i=1; i<=n; i++) dp[i][0] = dp[i-1][0] + spd[i-1] * (dist[i] - dist[i-1]);

    for (int i=0; i<n; i++)
        for (int j=0; j<=i; j++)
            for (int pos=i+1; pos<=n; pos++)
                dp[pos][j + pos-i-1] = min(dp[pos][j + pos-i-1], dp[i][j] + spd[i] * (dist[pos] - dist[i]));

    int ans = INT_MAX;
    for (int i=0; i<=k; i++) ans = min(ans, dp[n][i]);
    cout << ans << endl;
}
