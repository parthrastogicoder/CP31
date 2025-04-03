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
 
void solve(){
    int n;
    cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, less<>> pq;
    vi v(n);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = x;
        pq.push({x, i});
    }
    ll l = 0, r = 0, res = 0;
    bool side = true;
    while(!pq.empty()) {
        auto p = pq.top(); pq.pop();
        int val = p.first, idx = p.second;
        if(side) {
            r++;
            res += r * val * 2;
            v[idx] = r;
            side = false;
        } else {
            l--;
            res += abs(l) * val * 2;
            v[idx] = l;
            side = true;
        }
    }
    cout << res << nl;
    cout << 0 << sp;
    for(auto x : v) cout << x << sp;
    cout << nl;
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