#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define sp " "


void solve(){
	ll n;
	cin>>n;
 
	if(n%2==1)
		cout<<-1<<endl;
	else{
		n = n/2;
		if(n == 1)
			cout<<-1<<endl;
		else
			cout<<(n/3 + (n%3 != 0 ? 1: 0))<<sp<<n/2<<endl;
	}
		
 
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