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
#define ull unsigned long long

void solve(){
	int n;
	cin>>n;
 
	string s;
	cin>>s;
	for(int i=1; i<n; i++){
		if(s[i] < s[i-1]){
			cout<<"Yes"<<nl;
			cout<<i<<sp<<i+1<<nl;
			return;
		}
	}
	cout<<"No"<<nl;
 
}

int main() {
    fastio;
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}