#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vl vector<long long>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long
#define len(s) s.size()
#define all(s) s.begin(),s.end() 
#define pb push_back
#define vii vector<pair<int, int>>
#define ull unsigned long long

void solve(){
    ull n, q;
    cin >> n >> q;
    vi a(n);
    for (auto &i : a) cin >> i;
    
    ull l = 1e18, x;
    for (ull i = 0; i < q; i++) {
        cin >> x;
        if (l > x) {
            l = x;
            for (ull j = 0; j < n; j++) {
                if (a[j] % (1 << x) == 0)
                    a[j] += (1 << (x - 1));
            }
        }
    }

    for (auto i : a) cout << i << sp;
    cout << nl;
}

int main() {
    fastio;
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}