#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define len(x) (int)(x).length()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    string s;
    cin >> s;
    
    int n = len(s);
    
    if(s[0] == s[n-1])
        cout << s << nl;
    else {
        s[n-1] = s[0];
        cout << s << nl;
    }
}

int main() {
    fastio;
    
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}