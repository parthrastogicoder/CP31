#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long
#define len(s) s.size()
#define all(s) s.begin(),s.end() 
#define pb push_back
#define vii vector<pair<int, int>>
 
void solve() {
    ll a , b;
    cin >> a >> b;
    ll ans = 1e9;
    for ( int i = 0; i<= 30; i++ ) 
    {
        ll x = a ;
        if ( b+i>=2)
        {
            ll t = i ;
            while ( x > 0 )
            {
                t++;
                x /= (b+i);
            }
            ans = min(ans, t);
        }
    }
    cout << ans << nl;
            
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
