#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long


void solve(){
	string s;
	cin>>s;
 
	int z = count(s.begin(), s.end(), '0');
	int o = s.size() - z;
 
	int t = min(z, o);
	if(t%2==0 )
		cout<<"NET"<<nl;
	else
		cout<<"DA"<<nl;
 
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