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
    int ops = 0;
    for(int i = n-1; i > 0; i--) {
        if(arr[i] == 0) {
            cout << -1 << '\n';
            return;
        }
        while(arr[i-1] > 0 && arr[i] <= arr[i-1]) {
            arr[i-1] /= 2;
            ops++;
        }
    }
    
    cout << ops << '\n';
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