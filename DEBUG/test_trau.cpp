#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 97;
int n, a[N], b[N], c[N], st[4 * N];
void update(int id, int l, int r, int i, int val){
    if (r < i || i < l) return;
    if (l == i && i == r){
        st[id] = min(st[id], val);
        return;
    }
    int m = (l + r) >> 1;
    update(id << 1, l, m, i, val);
    update(id << 1 | 1, m + 1, r, i, val);
    st[id] = min(st[id << 1], st[id << 1 | 1]);
}
int get(int id, int l, int r, int u, int v){
    if (r < u || v < l) return n;
    if (u <= l && r <= v) return st[id];
    int m = (l + r) >> 1;
    int left = get(id << 1, l, m, u, v);
    int right = get(id << 1 | 1, m + 1, r, u, v);
    return min(left, right);
}
signed main(){
    // freopen("sumofneg.inp", "r", stdin); 
    // freopen("sumofneg.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= 4 * n; i++) st[i] = INT_MAX;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i - 1];
        b[i] = a[i];
    }
    sort(b + 0, b + n + 1);
    for(int i = 0; i <= n; i++)
        c[i] = lower_bound(b, b + n + 1, a[i]) - b + 1;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int j = get(1, 1, n, c[i] + 1, n);
        if (a[i] < 0) ans = i; else
        if (a[i] - a[j] < 0) ans = max(ans, i - j);
        update(1, 1, n, c[i], i);
    }
    cout << ans;
}