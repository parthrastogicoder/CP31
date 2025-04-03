#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n ; 
        cin >> n ; 
        vector< int> arr( n);
        for( int i =0 ; i< n ; i++ )
        {
            cin>> arr[i];
            
        }
        vector< int > ans ; 
        ans.push_back(arr[0]);
        for (int i = 1 ; i< n ; i++ )
        {
            if (arr[i]>=arr[i-1]) ans.push_back(arr[i]);
            else {
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }
        }
        int m = ans.size();
        cout<< m<< endl;
        for( int i =0 ; i< m ; i++ )
        {
            cout<<ans[i]<<" ";
        }
        cout << endl ;
    }

    return 0;
}
