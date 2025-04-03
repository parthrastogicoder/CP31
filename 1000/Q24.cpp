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
 
void solve() {
    int m, n;
    cin >> m >> n;
    vector<int> arr(m * n);
    int count = 0, sum = 0, mini = INT_MAX;
    for (int i = 0; i < m * n; i++) {
        cin >> arr[i];
        if (arr[i] <= 0) count++;
        sum += abs(arr[i]);
        arr[i] = abs(arr[i]);
        mini = min(mini, arr[i]);
    }
    if (count == 0 || count % 2 == 0) {
        cout << sum << nl;
    } else {
        sum -= 2 * mini;
        cout << sum << nl;
    }
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