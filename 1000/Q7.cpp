
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
 
	vi A(n), B(n);
	set<int> e;
	for(int i=0; i<n; i++){
		cin>>A[i];
		e.insert(A[i]);
	}
 
	for(int i=0; i<n; i++){
		cin>>B[i];
		e.insert(B[i]);
	}
 
	map<int,int> mp1, mp2;
	int cnt=1;
	mp1[A[0]] = 1;
	for(int i=1; i<n; i++){
		if(A[i] == A[i-1]) cnt++;
		else cnt = 1;
		mp1[A[i]] = max(mp1[A[i]], cnt);
	}
 
	mp2[B[0]] = 1;
	cnt  = 1;
	for(int i=1; i<n; i++){
		if(B[i] == B[i-1])
			cnt++;
		else
			cnt = 1;
 
		mp2[B[i]] = max(mp2[B[i]], cnt);
	}

	int ans = 1;
	for(auto it: e){
		ans = max(ans, mp1[it] + mp2[it]);
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