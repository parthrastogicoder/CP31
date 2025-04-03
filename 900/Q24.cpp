#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    ll a, b;
    cin >> a >> b;
    
    if(a == b) {
        cout << 0 << sp << 0 << nl;
    }
    else {
        if(a < b) swap(a, b);
        
        ll delta = a - b;
        
        cout << delta << sp << min(b%delta, delta - b%delta) << nl;
    }
}

int main() {
    fastio;
    
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}