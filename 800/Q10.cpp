#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t; // Number of test cases
    cin >> t;
    vector<vector<int>> dart ={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
        
    };
    while (t--) {
        vector<string> grid(10); // 10x10 grid
        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }
        int ans= 0 ;
        for ( int i = 0 ;i < 10 ; i++ )
        {
            for( int j =0 ; j< 10 ; j++ )
            {
                if(grid[i][j]=='X') ans+=dart[i][j];
            }
        }
        cout<< ans<< endl;
    }

    return 0;
}
