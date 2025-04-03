#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long
#define len(s) s.size()
#define all(s) s.begin(),s.end() 
#define pb push_back
#define vii vector<pair<int, int>>
 
void solve(){
       int n ;
       cin>> n ;
       int m = n-1;
       int l = floor(log2(m));
       int k = 0 ;
       vi v;
    for( int i = n-(int)(pow(2,l)) ; i<(int)(pow(2,l));i++ )
       {
           v.pb(i);
       }
       for(int i = (int)(pow(2,l));i<=n-1 ;i++ )
       {
           if(i%2)
           {v.pb(i);
           v.pb(k);
           k++;}
           else
           {v.pb(k);
               v.pb(i);
           
           k++;}
       }

       for( int i = 0 ; i< n ;i++)
       {
           cout<<v[i]<<sp;
       }
       cout<<nl;
       
        
}

int main() {
   fastio;
    
    int t;
    cin >> t;  
    while(t--) {
        solve();
    }
    
    return 0;
}