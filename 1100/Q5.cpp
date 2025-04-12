#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vl vector<long long>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long
#define len(s) s.size()
#define all(s) s.begin(),s.end() 
#define pb push_back
#define vii vector<pair<int, int>>
#define ull unsigned long long




void solve(){
        ll n;
        cin>>n;
        vl pre;
        pre.push_back(0);
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            pre.push_back(x+pre.back());
        }
        ll ans=0;
        for(ll i=1;i<=n;i++){
            if(n%i==0){
                vl v;
                for(ll j=i;j<=n;j+=i) v.push_back(pre[j]-pre[j-i]);
                sort(all(v));
                ans=max(ans,v[v.size()-1]-v[0]);
            }
        }
        cout<<ans<<nl;
}

int main() {
    fastio;
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}