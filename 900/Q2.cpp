#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t;
    cin >> t;
    
    while(t--) {
        int n,k;
        cin >> n>> k  ;
        string s ;
        cin >> s;
        unordered_map<char,int> mp ;
        for(auto ch: s )
        {
            mp[ch]++;
        }
        int o = 0;
        for(auto it: mp )
        {
            if(it.second%2==1) o++;
        }
        if(k<o-1 ) cout << "NO" << endl ;
        else cout <<"YES"<< endl ;
    }
}

int main() {
    fastio;
    solve();
    return 0;
}