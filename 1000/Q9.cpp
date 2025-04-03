
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
	int a = 1;
	for( int i = 2 ; i*i<=n;i++)
	{
	    if(n%i==0  )
	    {
	        a=n/i ; 
	        break ;
	    }
	}
// or 
//   for (int i = (int)sqrt(n);i>=2 ;i--)
//       if(n%i==0) a = i ;
	cout << a << sp << n-a << nl;
 
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