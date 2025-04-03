#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    bool yes = false;
    
    if((2*b-c)%a == 0)
        if((2*b-c)/a > 0) {
            yes = true;
        }
    
    if((c+a)%(2*b) == 0) {
        yes = true;
    }
    
    if((2*b-a)%c == 0)
        if((2*b-a)/c > 0) {
            yes = true;
        }
            
    if(a == b && b == c)
        yes = true;
    
    if(yes) cout << "Yes" << nl;
    else cout << "No" << nl;
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