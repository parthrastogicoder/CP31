#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    if (n%3==0) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
