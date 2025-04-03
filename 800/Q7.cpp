#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        int n, m; 
        cin >> n >> m;

        string x, s; 
        cin >> x >> s;
        int f = 0;
        for(int i = 0 ; i<=5  ;i++ )
        {
            if( x.find(s)!= string::npos)
                 {cout<<i<< endl ; f= 1; break;}
            x=x+x;
        }
        if(f==0)cout<<-1<< endl ;
        
    }

    return 0;
}
