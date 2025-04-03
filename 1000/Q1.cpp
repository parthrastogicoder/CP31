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
	
 
	string s;
	cin>>s;
 
	int n = len(s);
	int o = count(all(s), '1');
	int z = n - o;
 
	int i;
	for(i=0; i<n; i++){
		if(s[i] == '0')
			if(o > 0)
				o--;
			else
				break;
		else
			if(z>0)
				z--;
			else
				break;
 
	}
 
	
	cout<<n-i<<nl;
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