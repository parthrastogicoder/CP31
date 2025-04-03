#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    int z= 0 ;
    int o = 0 ;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i]==0)z++;
        if (arr[i]==1)o++;
    }
    long long ans= o*(pow(2,z));
    cout << ans << '\n';
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