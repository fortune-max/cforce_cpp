#include <bits/stdc++.h>
using namespace std;

map<string, int> day_pair = {
    {"01", 0}, {"02", 1}, {"03", 2}, {"04", 3}, {"12", 4},
    {"13", 5}, {"14", 6}, {"23", 7}, {"24", 8}, {"34", 9},
};

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int store[10][3] = {0}; //day of week, intersection, mon only, tue only

        // setup array for queries
        for (int k=0;k<n;k++){
            bool wkday[5];
            cin >> wkday[0] >> wkday[1] >> wkday[2] >> wkday[3] >> wkday[4];
            for (int i=0;i<5;i++){
                for(int j=i+1;j<5;j++){
                    bool day_1 = wkday[i], day_2 = wkday[j];
                    int day_key = day_pair[to_string(i) + to_string(j)];
                    if ((day_1 == 1) && (day_2 == 1))
                        store[day_key][0] += 1;
                    else if ((day_1 == 1) && (day_2 == 0))
                        store[day_key][1] += 1;
                    else if ((day_1 == 0) && (day_2 == 1))
                        store[day_key][2] += 1;
                }
            }
        }
        
        // brute force each day combo to see if valid
        int i = 0;
        for (;i<10;i++){
            int q1 = n/2, q2 = n/2;
            int mrg = store[i][0], a = store[i][1], b = store[i][2];
            if ((a > q1) || (b > q2)) continue;
            q1 -= a; q2 -= b;
            q1 += q2; q1 -= mrg;
            if (q1 == 0) break;
        }
        cout << ((i==10) ? "NO" : "YES") << endl;
    }
}