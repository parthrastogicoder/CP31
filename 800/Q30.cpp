#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n ;
        if ( n<=10 ) 
        {
            cout << n << endl ;
            continue ;
        }
        int k = 10 ; 
        int ans = 9 ;
        while ( k <= n )
        {
           ans += ((n)/k  >9)? 9 : (n)/k ;
           k*=10 ;

        }
        cout << ans << endl ;
        
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}