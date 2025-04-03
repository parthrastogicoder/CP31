#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, k; // Size of the array adnd the target number
        cin >> n >> k;

        vector<int> a(n); // Array of integers
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if( find(a.begin(),a.end(),k)!= a.end())
        {
            cout <<"YES"<< endl;
            
        }
        else cout <<"NO"<< endl;
    }

    return 0;
}
