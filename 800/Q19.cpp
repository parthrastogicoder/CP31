#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, s = 0, ops = 0;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
            s += x;
        }

        for (int &x : a) {
            if (s >= 0) break;
            if (x == -1) {
                x = 1; // Flip -1 to 1
                s += 2;
                ops++;
            }
        }
        int nc = count(a.begin(), a.end(), -1);
        if (nc% 2 != 0) {
            ops++;
        }

        cout << ops << "\n";
    }
}

int main() {
    solve();
    return 0;
}