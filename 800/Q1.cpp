#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0);

bool solve(int n, int k, vector<int>& a) {
    if (k == 1) {
        return is_sorted(a.begin(), a.end());
    }
    else return true ;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        cout << (solve(n, k, a) ? "YES\n" : "NO\n");
    }
    return 0;
}
