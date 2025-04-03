#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() {
    int t;
    cin >> t;
    
    while(t--) {
        int n,a,b;
        cin >> n>> a>> b  ;
        if(n<=3)
        {
            if ( a==n && b ==n ) {cout <<"YES"<<endl; }
            else cout<< "NO"<<endl;
            continue ;
        }
        else 
        {
            if ( n-a-b >=2 )cout <<"YES"<<endl;
            else if(a==n&&b==n) cout <<"YES"<<endl;
            else cout<< "NO"<<endl;
            continue ;
        }
        
        
        
    }
}

int main() {
    fastio;
    solve();
    return 0;
}