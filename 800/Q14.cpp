#include <bits/stdc++.h>
using namespace std;

bool solve(int a, int b, int c) {
    if (a> b){
        return true;
    }
    else if( b>a )
    {
        return false;
    }
    else 
    {
        if ( c%2==1) return true ;
        else return false ;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (solve(a, b, c)) {
            cout << "First\n"; // Anna wins
        } else {
            cout << "Second\n"; // Katie wins
        }
    }

    return 0;
}
