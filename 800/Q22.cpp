#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        int n,k;
        cin >> n>> k ;
        if (n%2== 0 ) cout<< "YES"<< endl;
        else 
        {
            if ( k%2==0 )cout << "NO"<< endl;
            else {
                if( k <= n )cout<< "YES"<< endl;
                else cout << "NO"<< endl;
            }
        }
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}