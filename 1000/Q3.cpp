#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long
#define len(s) s.size()
#define all(s) s.begin(),s.end() 
void solve(){
	int n,p;
	cin>>n>>p;
 
	vi A(n);
	for(int i=0; i<n; i++)
		cin>>A[i];
	vi B(n);
	for(int i=0; i<n; i++)
		cin>>B[i];
 
	vector<pair<ll,ll>> cost_cap;
	cost_cap.push_back({p, n+1});
	for(int i=0; i<n; i++)
		cost_cap.push_back(make_pair(B[i], A[i]));
 
	sort(all(cost_cap));
 
	int total = 1;
	ll cost = p;
	int idx = 0;
	while(total < n){
		int left = n - total;
 
		if(cost_cap[idx].second <= left){
			total += cost_cap[idx].second;
			cost = cost + cost_cap[idx].first * 1LL * cost_cap[idx].second;
		}else{
			total = n;
			cost = cost + left*1LL*cost_cap[idx].first;
		}
		idx++;
	}
	cout<<cost<<nl;
 
 
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