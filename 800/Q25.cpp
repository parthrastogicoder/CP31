#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n ;
        string s ;
        cin >> s; 
        int i =0;
        for ( ; i< n/2 ;i ++ )
        {
            if (s[i]!= s[n-1-i ]) continue ;
            else break ;
            
        }
        cout << n - 2*i << endl; 
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}