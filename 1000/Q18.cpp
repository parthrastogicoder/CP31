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

       ll h , w ;
       cin >> w>> h ;
       ll ma_x = INT_MIN;
       for( ll i = 0 ; i< 2 ; i++ )
       {
           ll l ;
           cin>> l;
           ll mi=INT_MAX ;
           ll ma=INT_MIN;
           for(ll j = 0 ; j< l ; j++ )
           {
               ll t ;
               cin>>t;
               mi=min(mi,t);
               ma=max(ma,t);
               
           }
           ma_x=max(ma_x,ma-mi);
       }
       ll ma_y=INT_MIN;
       for( ll i = 0 ; i< 2 ; i++ )
       {
           ll l ;
           cin>> l;
           ll mi=INT_MAX ;
           ll ma=INT_MIN;
           for(ll j = 0 ; j< l ; j++ )
           {
               ll t ;
               cin>>t;
               mi=min(mi,t);
               ma=max(ma,t);
               
           }
           ma_y=max(ma_y,ma-mi);
       }      
       ma_y=ma_y*w;
       ma_x=ma_x*h;
       cout<<max(ma_y,ma_x)<<nl;
        
}

int main() {
   fastio;
    
    ll t;
    cin >> t;  
    while(t--) {
        solve();
    }
    
    return 0;
}