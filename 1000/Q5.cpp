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
	int n,k;
	cin>>n>>k;

	vi arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
    
	vii hp_idx;
	for(int i=0; i<n; i++){
		if(arr[i]%k == 0)
			hp_idx.pb({k,-i});
		else
			hp_idx.pb({arr[i]%k, -i});
	}
	sort(all(hp_idx));
 
	for(int i=n-1; i>=0; i--){
		cout<<abs(hp_idx[i].second) + 1<<sp;
	}
	cout << nl; 
 
 
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