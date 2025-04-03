#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl endl
#define ll long long
#define len(s) s.size()
#define all(s) s.begin(),s.end() 
#define pb push_back
#define vii vector<pair<int, int>>
 
void solve(){
        int n,k;
        int ans=INT_MAX;
        int sum=0;
        cin>>n>>k;
        string s;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            s.push_back(ch);
        }
        for(int i=0;i<k;i++) if(s[i]=='W') sum++;
        ans=sum;
        for(int i=1;i<=n-k;i++){
            if(s[i-1]=='W') sum--;
            if(s[i+k-1]=='W') sum++;
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
}

int main() {
   fastio;
    
    int t;
    cin >> t;  
    while(t--) {
        solve();
    }
    
    return 0;
}