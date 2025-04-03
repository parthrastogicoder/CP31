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
        bool flag = false ;
        for(int i =0 ; i< n ; i++ )
        {
            for( int j = i+1 ;j<n ;j++ )
            {
                if (__gcd(v[i],v[j])<=2)
                {
                    flag= true ;
                    break ;
                }
            }
        }
        cout << (flag?"YES":"NO" )<<endl;
        
        
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}