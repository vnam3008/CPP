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

    cout << rd(1, 5);

    return 0;
}