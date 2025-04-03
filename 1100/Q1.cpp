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
 
	unordered_map<char,int> mp;
	for(int i=0; i<n; i++){
		char ch = s[i];
		if(mp.find(ch) == mp.end())
			mp[ch] = i; 
	}
	ll total = 0;
	for(auto [ch,i]: mp){
		total += (n-i);
	}
	cout<<total<<nl;
 
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