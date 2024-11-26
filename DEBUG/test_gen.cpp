#include <bits/stdc++.h>
using namespace std;

long long rd(long long l, long long r){
    long long res = 0;
    for (int i = 1; i <= 4; i++) res = (res << 15) ^ (rand() & ((1 << 15) - 1));
    return l + res % (r - l + 1);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    srand(time(nullptr));

    int n = rd(1, 1e3);
    int k = rd(1, 1e5);
    k = min(n*n, k);
    cout << n << " " << k << "\n";
    for (int i = 1; i <= n; i++) cout << rd(0, 1e9) << " ";
    cout << "\n";
    for (int i = 1; i <= n; i++) cout << rd(0, 1e9) << " ";

    return 0;
}