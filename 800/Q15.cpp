#include <bits/stdc++.h>
using namespace std;

bool solve(int n, vector<int>& a) {
   int o = 0 ; 
   int e = 0 ;
   int s = 0 ; 
   for(int i:a ) 
   {
       if(i%2==1) o++;
       else e++;
       s+=i;
   }
   if(s%2==1) return false ;
   return true ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (solve(n, a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
