#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int>& a) {
   if(a[0]!=1) cout<< "NO"<<endl;
   else cout<< "YES"<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        solve(n, a);
    }

    return 0;
}
