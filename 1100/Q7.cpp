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
    ll n, x;
    cin>>n>>x;
    vl arr(n);
    for(auto &a: arr) 
        cin>>a;
    ll low = 0;
    ll high = 1e10;
    ll mid;
    ll ans = 0;
    while(low<=high){
        mid = low+(high-low)/2;
        ll w = 0;
        for(int i=0;i<n;i++){
            ll h = max(1ll*0,(mid-arr[i]));
            w+=h;
        }
        if(w<=x){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    cout<<ans<<endl;
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