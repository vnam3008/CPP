/*
    author: Tran Van Nam
    Nguyen Trai High School - Quang Binh
*/
#include <bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    vector <int> a(n);
    for (auto &x: a) cin >> x;

    long long ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++){
            vector <int> cnt(int(1e6), 0);
            for (int k = i; k <= j; k++) cnt[a[k]]++;
            bool ok = true;
            for (int k = i; k <= j; k++)
                if (cnt[a[k]] > 1) ok = false;
            if (ok)
                if ()
        }
    
    return 0^0;
}