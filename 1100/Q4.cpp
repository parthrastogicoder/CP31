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
  int n ;
    cin >> n;
    vi A(n);
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    int s = A[0] ;
    int mi = A[0] ;
    for (int i=1; i<n; i++) {
       
        if (s <0 )
        {
            mi = max(mi, s);
            s =0 ;
        }
        if (abs(A[i]%2) == abs(A[i-1]%2)) {
            s= A[i];
        }
        else {
            s+=A[i];
        }
        mi = max(mi, s);
    } 
    cout<<mi<<nl;

}

int main() {
    fastio;
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}