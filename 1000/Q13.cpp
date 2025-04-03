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
        int n,x;
        int l,r;
        int ans=0;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            int v ;
            cin>>v;
            if(i==0) l=v-x,r=v+x;
            else{
                l=max(l,v-x);
                r=min(r,v+x);
                if(l>r) {
                ans++;
                l=v-x;
                r=v+x;
                    
                }
            }
        }
        cout<<ans<<endl;

    
 
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