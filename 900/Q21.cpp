#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"
#define len(x) (int)(x).length()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int ops(string& last_two, string& num) {
    int x = last_two[0];
    int y = last_two[1];
    
    int steps = 0;
    int j = len(num) - 1;
    while(j > 0 && num[j] != y) {
        j--;
        steps++;
    }
    
    int i = j-1;
    while(i > 0 && num[i] != x) {
        i--;
        steps++;
    }
    return steps;
}

void solve() {
    ll n;
    cin >> n;
    
    string num = to_string(n);
    
    vector<string> digits = {"00", "25", "50", "75"};
    int ans = 1e9;
    for(auto digit : digits) {
        int mini = ops(digit, num);
        ans = min(mini, ans);
    }
    cout << ans << nl;
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