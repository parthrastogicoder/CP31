#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int a, b, n;
        cin >> a >> b >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        ll total = b;
        for(auto x : arr) {
            total += min(1LL + x, a * 1LL) - 1;
        }
        cout << total << '\n';
    }
    return 0;
}