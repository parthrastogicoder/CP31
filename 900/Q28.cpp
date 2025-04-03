 #include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long


void solve(){
	int n,k;
	cin>>n>>k;
 
	vi arr(n*k);
	for(int i=0; i<n*k; i++)
		cin>>arr[i];
 
	ll ans = 0;
	int i=n*k;
	while(k--){
		i = i - (n/2 + 1);
		ans += arr[i];
	}
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