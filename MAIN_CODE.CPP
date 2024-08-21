/*
    author: Tran Van Nam
    Nguyen Trai High School - Quang Binh
*/
#include <bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    map <int, int> mp;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[x]++;
    }

    for (auto &x: mp) cout << x.first << " " << x.second << "\n";
    
    return 0^0;
}
