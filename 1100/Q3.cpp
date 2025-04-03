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
    int n, x;
    cin >> n;
    vii res;
    vi A(n);
    for (int i=0; i<n; i++) {
        cin >> x;
        A[i] = x;
        res.emplace_back(x, i);
    }   
    sort(all(res)); 
    sort(all(A));

    vi ans(n, 0);
    int cnt = 0;
    int j = 0;
    for (int i=0; i<n; i++) {
        if (i<j) {
            ans[res[i].second] = j-1;
            continue;
        }
        while (j<n) {
            cnt += A[j];
            j++; 
            if (j==n || A[j]>cnt) break;
        }
        ans[res[i].second] = j-1;
    }
    for (int i=0; i<n; i++) {
        cout << ans[i] << sp;
    }
    cout << nl;
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