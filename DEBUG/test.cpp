/*
    author: Tran Van Nam
    Nguyen Trai High School - Quang Binh
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

long long preSum[N], preMax[N];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // freopen("SUMOFNEG.INP", "r", stdin);
    // freopen("SUMOFNEG.OUT", "w", stdout);

    /*
        1 <= j <= i <= n
        pre[i] - pre[j - 1] < 0
        pre[i] < pre[j - 1]
        1 <= k < j -> pre[i] >= pre[k]
        -> max(pre[]: 1 -> j - 1) <= pre[i]
    */

    int n; cin >> n;
    preSum[0] = 0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        preSum[i] = preSum[i - 1] + x;
    }

    preMax[1] = preSum[1];
    for (int i = 2; i <= n; i++) preMax[i] = max(preMax[i - 1], preSum[i]);

    // debugArr(preSum, n + 1);
    // debugArr(preMax, n + 1);

    int ans = 0;
    for (int i = 1; i <= n; i++){
        // if (preSum[i] < 0) ans = i;
        int l = 1, r = n, j = -1;
        while (l <= r){
            int mid = l + r >> 1;
            if (preSum[i] < preMax[mid - 1]) j = mid;
            if (preSum[i] <= preMax[mid - 1]) r = mid - 1;
            else l = mid + 1;
        }
        if (j != -1) ans = max(ans, i - j + 1);
        // debug(ans, i, j);
    }

    cout << ans;
    
    return 0^0;
}
