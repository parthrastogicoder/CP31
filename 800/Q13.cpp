#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_elem = *max_element(a.begin(), a.end());
        int min_elem = *min_element(a.begin(), a.end());

        if (max_elem == min_elem) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> b, c;
        for (int i = 0; i < n; i++) {
            if (a[i] == max_elem) {
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }

        cout << b.size() << " " << c.size() << '\n';
        for (int x : b) cout << x << " ";
        cout << '\n';
        for (int x : c) cout << x << " ";
        cout << '\n';
    }

    return 0;
}
