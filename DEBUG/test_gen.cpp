#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll rd(ll l, ll r){
    ll res = 0;
    for (int i = 1; i <= 4; i++) res = (res << 15) ^ (rand() & ((1 << 15) - 1));
    return l + res % (r - l + 1);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    srand(time(nullptr));

    int n = rd(1, 100000);
    cout << n << "\n";
    for (int i = 1; i <= n; i++){
        int ok = rd(1, 2);
        if (ok == 1) cout << -rd(0, 32000); else cout << rd(0, 32000);
        cout << " ";
    }

    return 0;
}