#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int maxi = 1, cnt = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1])
            cnt++;
        else
            cnt = 1;
        maxi = max(maxi, cnt);
    }
    
    cout << maxi+1 << "\n";
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