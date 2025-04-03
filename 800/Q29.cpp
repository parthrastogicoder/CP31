#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n ;
        vector< int > v ( n );
        for( int i = 0 ; i< n ; i++ )
        {
            cin>> v[i];
        }
      int c = 0 ;
      for ( int i = 1 ; i< n; i++ )
      {
          if (v[i]%2 == v[i-1]%2) c++;
      }
      cout << c<< endl;
        
        
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}