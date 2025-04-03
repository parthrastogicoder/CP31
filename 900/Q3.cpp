#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    
    ll low = (k * (k + 1)) / 2;
    ll high = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
    
    if(x >= low && x <= high) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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