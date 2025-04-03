#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<pair<int,int>> pairs(n);
    for(int i = 0; i < n; i++) {
        pairs[i] = {a[i], i};
    }
    
    sort(pairs.begin(), pairs.end());
    
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        b[pairs[i].second] = i + 1;
    }
    
    for(int i = 0; i < n; i++) {
        cout << b[i] << (i == n-1 ? '\n' : ' ');
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}