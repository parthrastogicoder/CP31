#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long n;
        cin >> n;
        unsigned long long ans;
        for (unsigned long long i = 1;; i++) {
            if (n % i != 0) {
                ans = i - 1;
                break;
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
