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
bool f ( ull n )
{
    string x = to_string( n);
    for ( int i  = 0 ;  i<x.size() ; i++ )
    {
        if (x[i]!= '0' && n%(x[i]-'0')!= 0) return false ;
    }
    return true ;
}
void solve() {
   ull n ;
   cin >> n ;
   while (!f(n))
   {
       n++;
   }
   cout<< n << nl ;
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