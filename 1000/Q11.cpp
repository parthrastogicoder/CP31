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
    int n,d;
    cin>> n>> d;
    vector< int > p ( n );
    for( int i = 0 ; i< n ; i++ )
    {
        cin>> p[i];
    }
    sort(all(p));
    int i = -1 ; 
    int j = n-1 ; 
    int curr= p[j];
    int ans = 0 ; 
    
    while(i< j)
    {
        ll mp = p[j];
 
		if(curr <= d){
			i++;
			curr += mp;
		}else{
			ans++;
			j--;
 
			if(j>=0) curr = p[j];
		}
    }
    cout<<ans<<endl;
}

int main() {
   fastio;
    
    int t=1;
    // cin >> t;  
    while(t--) {
        solve();
    }
    
    return 0;
}