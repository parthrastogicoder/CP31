#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long

void solve(){
	int n;
	cin>>n;
	int cnt2 =0, cnt3 = 0;
	while(n%2 == 0){
		n/=2;
		cnt2++;
	}
	while(n%3 == 0){
		n/=3;
		cnt3++;
	}
 
	if(n != 1){
		cout<<"-1"<<nl;
		return;
	}
	if(cnt2 <= cnt3)
		cout<<(cnt3-cnt2)+cnt3<<nl;
	else
		cout<<"-1"<<nl;
 
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