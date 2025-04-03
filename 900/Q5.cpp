#include <bits/stdc++.h>
using namespace std;
#define sp " "

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if(n % 2 == 0) {
        cout << 2 << "\n";
        cout << 1 << sp << n << "\n";
        cout << 1 << sp << n << "\n";
    } else {
        cout << 4 << "\n";
        cout << 1 << sp << n-1 << "\n";
        cout << 1 << sp << n-1 << "\n";
        cout << n-1 << sp << n << "\n";
        cout << n-1 << sp << n << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}