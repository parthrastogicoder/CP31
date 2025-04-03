#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n ;
        vector< int > v ( n+1 );
        for( int i = 1 ; i<= n ; i++ )
        {
            cin>> v[i];
            
        }
        bool flag = false ;
        int rc = count(v.begin(),v.end(),2);
        int lc = 0 ;
        for( int k = 1 ; k < n ; k++ )
        {
            if (v[k]== 2)
            {
                rc--;
                lc++;
            }
            if( rc== lc )
            {
                flag = true ; 
                cout << k << endl ;
                break;
            }
        }
        if(!flag ) cout << -1 << endl ;
        
        
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}