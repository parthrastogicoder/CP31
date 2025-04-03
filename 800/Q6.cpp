#include <bits/stdc++.h>
using namespace std;

bool solve(int n, vector<int>& a) {
   if(n==2 ) return true;
   unordered_map<int, int> mp;
   bool flag = true ;
   for( int i = 0 ; i< n ; i++ )
   {
       mp[a[i]]++;
       if( mp.size()>2) {
           flag=false;
           break;
       }
   }
   if( mp.size()==2 ) 
   {
       int p = begin(mp)->second;
       if(p!=n/2 && p!=(n+1)/2) flag= false ;
       
   }
   return flag ;
   
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
        cout<<(solve(n, a)?"YES":"NO")<<endl;
    }

    return 0;
}
