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
        int i=0,j,n,r,b;
        cin>>n>>r>>b;
        int div=r/(b+1);
        int rem=r%(b+1);
        while(i<n){
            for(j=0;j<div && i<n;j++) 
            {
                i++;
                cout<<"R";
            }
            if(i<n && rem>0) {
                i++;
                cout<<"R";
                rem--;
            }
            if(i<n) {
                i++;
                cout<<"B";
            }
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