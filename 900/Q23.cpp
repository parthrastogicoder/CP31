#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
        int ans = accumulate(arr.begin(), arr.end(), arr[0], std::bit_and<int>());
	cout<<ans<<endl;
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