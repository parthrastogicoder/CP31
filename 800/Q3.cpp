#include <bits/stdc++.h>
using namespace std;
int solve( int n , string s )
{
    int m = 0; 
    int ct=0;
    int tc = 0 ;
    for(auto& c : s)
    {
        if (c=='.') 
        {
            ct++;
            m=max(m,ct);
            tc++;
        }
        if(c=='#')
        {
            ct=0 ;
        }
    }
    if(m>=3) return 2;
    else return tc ;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  
        string s;
        cin >> s;  
        cout<<solve(n,s)<<endl;
        
    }

    return 0;
}
