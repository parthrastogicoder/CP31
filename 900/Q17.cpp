#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sp " "
#define nl "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


void solve() {
    int n;
    cin >> n;
    
    vi arr(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    
    int freq = 0;
    for(auto it : mp) {
        freq = max(freq, it.S);
    }
    
    int ops = 0;
    while(freq < n) {
        ops++;
        
        if(n - freq >= freq) {
            ops += freq;
            freq *= 2;
        }
        else {
            ops += n - freq;
            freq = n;
        }
    }
    
    cout << ops << nl;
}

int main() {
    fastio;
    
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}