#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0);

int solve(int n, int x, vector<int>& a) {
    int m = a[0];
    for(int i = 1 ; i<n ; i++)
    {
        m=max(m,a[i]-a[i-1]);
    }
    m=max(m,2*(x-a[n-1]));
    return m;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        cout << solve(n, k, a)<< endl ;
    }
    return 0;
}
