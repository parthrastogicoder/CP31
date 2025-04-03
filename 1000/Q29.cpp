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
	ll a,b;
	cin>>a>>b;
 
	ll cnt1 = 0, cnt2=0;
	while(a%2 == 0){
		a/=2;
		cnt1++;
	}
 
	while(b%2 == 0){
		b/=2;
		cnt2++;
	}
 
	if(a != b)cout<<-1<<nl;
	else{
		if(cnt1 == cnt2)cout<<0<<nl;
		else{
			ll dif = abs(cnt2-cnt1);
			cout<<dif/3 + (dif%3 != 0)<<nl;
 
 
		}
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