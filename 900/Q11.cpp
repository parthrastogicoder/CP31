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
        if(arr[i] == 1)
            arr[i]++;
    }
    
    for(int i = 1; i < n; i++) {
        if(arr[i] % arr[i-1] == 0)
            arr[i]++;
    }
    
    for(auto a : arr)
        cout << a << sp;
    cout << "\n";
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