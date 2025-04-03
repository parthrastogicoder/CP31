#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool even(ll n) {
    return (n % 2 == 0);
}

void solve() {
    ll x, n;
    cin >> x >> n;
    
    ll d;
    
    switch(n % 4) {
        case 0:
            d = 0;
            break;
        case 1:
            d = -n;
            break;
        case 2:
            d = 1;
            break;
        case 3:
            d = n + 1;
            break;
    }
    
    if(even(x)) cout << x + d << nl;
    else cout << x - d << nl;
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