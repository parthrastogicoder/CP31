#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Size of the array adnd the target number
        cin >> n ;

        vector<int> a(n-1); // Array of integers
        int sum = 0 ;
        for (int i = 0; i < n-1; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        cout<< -sum << endl;

    }

    return 0;
}
