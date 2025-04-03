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
	int n, k ;
    cin >> n >> k;
    vi arr(n);
    vi arr2(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    int mi = -1e9;
    int ans = -1e9;
    int t = 0;
    for( int i = 1; i<=n ;i++)
    {
        t +=arr[i-1];
        int s = k-i ;
        if (s<0)break;
        mi = max(mi, arr2[i-1]);
        ans = max(ans, t + mi * s);
    }
    cout << ans << nl;
 
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