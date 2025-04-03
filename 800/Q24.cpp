#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n ;
        vector< int> v( n );
        int x = 0 ; 
        for ( int i =0 ; i< n ; i++ )
        {
            cin >> v[i];
            x^= v[i];
        }
        if(n% 2 == 1 )
         {
             cout << x << endl ;
         }
         else 
         {
             if (x== 0)cout << 1<< endl ;
             else cout << -1<< endl ; 
         }
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}