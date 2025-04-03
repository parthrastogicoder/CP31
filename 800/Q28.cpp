#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n ;
        vector< int > v ( n );
        for( int i = 0 ; i< n ; i++ )
        {
            cin>> v[i];
            
        }
        if ( v[0 ]== v [ n-1 ]) cout << "NO"<< endl ; 
        else 
        {
            cout << "YES"<< endl ; 
            cout << v[n-1]<<" "<<v[0]<<" ";
            for( int i = 1 ; i< n-1 ; i++ )
            {
                cout << v[ i ]<< " ";
            }
            cout << endl;
        }
        
        
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}