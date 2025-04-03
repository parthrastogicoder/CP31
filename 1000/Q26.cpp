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
 
void solve() {
	ll x,y,k;
	cin>>x>>y>>k;
 
	ll factor = x-1; // num of sticks gain  
	ll needs = y*k - 1; // number of sticks for coal
	ll stick_trades = needs/factor + (needs%factor != 0);
	ll coal_trades = k;
 
	ll sticks = 1 + stick_trades*factor - y*k;

	if(sticks >= k){
		cout<<(stick_trades + coal_trades)<<nl;
	}else{
		needs = k-sticks;
		stick_trades += needs/factor + (needs%factor != 0);
		cout<<(stick_trades + coal_trades)<<nl;
	}
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}