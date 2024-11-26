/*
    author: Tran Van Nam
    Nguyen Trai High School - Quang Binh
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int a[N], cnt[N];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];

    memset(cnt, 0, sizeof cnt);
    long long ans = 0;
    for (int i = 1, j = 1; i <= n; i++){
        cnt[a[i]]++;
        while (cnt[a[i]] > 1) cnt[a[j++]]--;
        ans += i - j + 1;
    }

    cout << ans;
    
    return 0^0;
}