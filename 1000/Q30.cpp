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
	int n;
	cin>>n;
 
	vi arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
 
	sort(all(arr), greater<int>());
	for(int i=0; i<n; i++)
		cout<<arr[i]<<sp;
	cout<<nl;
 
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