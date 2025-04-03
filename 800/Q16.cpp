#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& a) {
   if(!is_sorted(a.begin(),a.end())) return 0 ;
   
  int mi = INT_MAX;
  for(int i = 1 ; i< n ; i++ )
  {
      mi = min (mi, a[i]-a[i-1] );
  }
  return mi/2+1;
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

        cout<< solve(n,a)<<endl;
    }

    return 0;
}
