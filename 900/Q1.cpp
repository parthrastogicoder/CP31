#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>

void solve() {
    ll a, b;
    cin >> a >> b;
    ll xk, yk;
    cin >> xk >> yk;
    ll xq, yq;
    cin >> xq >> yq;
    
    set<pll> king_pos, queen_pos;
    vector<pair<ll,ll>> moves = {
        {a,b}, {a,-b}, {-a,b}, {-a,-b},
        {b,a}, {b,-a}, {-b,a}, {-b,-a}
    };
    
    for(auto [dx,dy] : moves) {
        king_pos.insert({xk + dx, yk + dy});
    }
    
    for(auto [dx,dy] : moves) {
        queen_pos.insert({xq + dx, yq + dy});
    }
    
    ll ans = 0;
    for(auto pos : king_pos) {
        if(queen_pos.count(pos)) ans++;
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}