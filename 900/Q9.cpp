#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin >> n;
    
    vi arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = __gcd(abs(arr[i]-i), ans);
    }
    cout << ans << "\n";
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