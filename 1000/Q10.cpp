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
    int n ;
    char c;
	cin>>n>>c;
 
	string s;
	cin>>s;
 
	s.append(s);
 
	int ans = -1e9;
	int last = -1;
	for(int i=len(s)-1; i>=0; i--){
		if(s[i] == 'g')
			last = i;
		if(s[i] == c){
			ans = max(ans, last-i);
		}
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