
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
	int n;
	cin>>n;
	string s;
	cin>>s;
	unordered_map<char,int> l, r;
	for(auto ch:s)
		r[ch]++;
 
	int ans = 2;
	for(int i=0; i<n-1; i++){
		char ch = s[i];
 
		l[ch]++;
		if(r[ch] == 1)
			r.erase(ch);
		else
			r[ch]--;
 
		int temp = l.size() + r.size();
		ans = max(temp);
 
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