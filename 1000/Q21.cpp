#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long
#define len(s) s.size()
#define all(s) s.begin(),s.end() 
#define pb push_back
#define vii vector<pair<int, int>>
 
void solve() {
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0 << nl;
        return;
    }
    if (a.size() > b.size()) {
        swap(a, b);
    }
    int m = a.size(), n = b.size();
    int ans = n + m;
    for (int i = 0; i< m ;i++)
    {
        for( int j = 1 ; j <=m-i ;j++)
        {
            string x = a.substr(i,j);
            int l = x.size();
            if (b.find(x) != string::npos) {
                ans = min(ans, n + m - 2 *j);
            }
        }
    }
    cout << ans << nl;
            
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
