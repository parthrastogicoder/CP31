#include <bits/stdc++.h>
using namespace std;
#define vll vector<long long>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long


void solve(){
	int n,x;
	cin>>n>>x;
 
	vll arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
 
	ll sum = accumulate(arr.begin(),arr.end(), 0LL);
	ll bmin = sum/x + (sum%x != 0);
 
	ll bmax = 0;
	for(auto a:arr){
		bmax = bmax + a/x + (a%x != 0);
	}
 
	cout<<bmin<<sp<<bmax<<nl;
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