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
	int n,k,q;
	cin>>n>>k>>q;
 
	vi arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
 
 
	ll ans = 0;
	ll cnt = 0;
	for(int i=0; i<n; i++){
		if(arr[i] <= q)
			cnt++;
		else{
			if(cnt >= k){
				ans += (cnt*1LL*(cnt+1))/2 - ((k-1)*cnt - ((k-2)*(k-1))/2);
			}
			cnt = 0;
		}
	}
	if(cnt >= k)
		ans += (cnt*1LL*(cnt+1))/2 - ((k-1)*cnt - ((k-2)*(k-1))/2);
 
	cout<<ans<<nl;

 
 
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