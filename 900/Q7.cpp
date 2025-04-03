#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n, k;
    cin >> n >> k;
    
    vi arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int l = 1, cnt = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i-1] <= k)
            cnt++;
        else
            cnt = 1;
        l = max(cnt, l);
    }
    
    cout << n-l << "\n";
}

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}