#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    
    long long h = d-b;
    if(h < 0) {
        cout << -1 << '\n';
        return;
    }
    
    long long x = a+h;
    if(c > x) {
        cout << -1 << '\n';
        return;
    }
    
    cout << h + abs(c-x) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}