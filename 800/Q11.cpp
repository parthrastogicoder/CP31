#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t; // Number of test cases
    cin >> t;
    vector < int > arr(t) ;
    int ans = INT_MAX;
    for( int i =0 ; i< t ; i++ )
    {
        cin>> arr[i];
        ans = min( ans , abs( arr[i]));
    }
    cout<< ans<<endl;
    
    return 0;
}
