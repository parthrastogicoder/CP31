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
 
int solve() {
    ll mex, x;
    cin >> mex >> x;
    ll c = 0;
    int g = mex % 4;
    for (int i = mex - 1; g > 0; i--) {
        c ^= i;
        g--;
    }
    ll temp = c ^ x;
    ll ans = 0;
    if (c == x) ans = mex;
    else if ((c == 0 && mex == x) || temp == mex) {
        ans = mex + 2;
    } else {
        ans = mex + 1;
    }
    cout << ans << nl;
    return 0;
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