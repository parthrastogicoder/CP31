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
	int n,k;
	cin>>n>>k;
 
	vi arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
 
	int d = k-1;
	int e_cnt = 0;
	for(int i=0; i<n; i++){
		if((arr[i])%2==0)e_cnt++;
 
		if(arr[i]%k == 0)
			d = 0;
		else
			d = min(d, k-arr[i]%k);
	}
 
	if(k!=4){
		cout<<d<<nl;
	}else{
		if(e_cnt >= 2)
			cout<<0<<nl;
		else if(e_cnt == 1)
			cout<<min(d, 1)<<nl;
		else//13 17
			cout<<min(2, d)<<nl;
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