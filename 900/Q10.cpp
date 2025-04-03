#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n, q;
    cin >> n >> q;
    
    vll arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    vll psum(n+1);
    for(int i = 1; i <= n; i++) {
        psum[i] = psum[i-1] + arr[i];
    }
    
    while(q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        
        ll sum = psum[l-1] + psum[n] - psum[r] + k*(r-l+1);
        
        if(sum % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
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