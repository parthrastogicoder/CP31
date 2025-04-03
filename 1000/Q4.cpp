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
void solve(){
int n;
	cin>>n;
 
	int mini = INT_MAX;
	vi min_2;
	for(int i=0; i<n; i++){
		int m;//size of this array
		cin>>m;
 
		vi arr(m);
		for(int i=0; i<m; i++)cin>>arr[i];
 
		int min_el = *min_element(all(arr));
		mini = min(min_el, mini);
 
		arr.erase(find(all(arr), min_el));
 
		min_2.pb(*min_element(all(arr)));
 
	}
	ll beauty = mini + accumulate(all(min_2), 0LL) - *min_element(all(min_2));
	cout<<beauty<<nl;
 
 
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