#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007LL

long long binpow(long long a, long long b, long long mod){
    long long ret = 1;
    while (b) {
        if (b & 1) ret = (ret * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ret;
}

int main(){
    long long t, ans; cin >> t;
    while(t--){
        long long n, k, ans = 0; cin >> n >> k;
        bitset<32> rep = bitset<32>(k);
        for (int i=0; i<32; i++)
            if (rep[i]) ans = (ans + binpow(n, i, MOD))%MOD;
        cout << ans << endl;
    }
}