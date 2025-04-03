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
  int n ;
  cin >>  n ;
  set<int> st ;
  for( int i = 0 ;  i< n ; i ++ )
  {
      int v ;
      cin >> v ;
      st.insert(v);
  }
  if (st.size()==n)
  {
      cout<<"NO"<<nl;
  }
  else 
  {
      cout << "YES"<< nl ;
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