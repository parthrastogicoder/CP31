#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long


void solve(){
	
 
	int n;
	cin>>n;
 
	vi arr(n+1);
	for(int i=1; i<=n; i++)
		cin>>arr[i];
 
	for(int i=2; i<=n-1; i++){
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
			cout<<"YES"<<nl;
			cout<<i-1<<sp<<i<<sp<<i+1<<nl;
			return;
		}
	}
 
 
	cout<<"NO"<<nl;
 
 
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