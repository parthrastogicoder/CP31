#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

void solve() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;

        if (x % k != 0) {
            cout << 1 << "\n";
            cout << x << "\n";
        } else {
            cout << 2 << "\n";
            cout << x - 1 << " " << 1 << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
