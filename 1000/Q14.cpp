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
 int i,n,x,pre,cnt,s,flag=0;
        cin>>n;
        vector<int> store;
        for(i=0;i<n;i++){
            cin>>x;
            if(i==0) s=0,pre=x,cnt=1;
            else if(pre==x) cnt++;
            else{
                if(cnt==1) flag=1;
                store.push_back(i);
                s++;
                while(s<i) store.push_back(s),s++;
                s=i;
                cnt=1;
                pre=x;
            }
        }
        if(cnt==1) flag=1;
        else{
            store.push_back(n);
            s++;
            while(s<n) store.push_back(s),s++;
        }
        if(flag==1) cout<<-1;
        else for(i=0;i<n;i++) cout<<store[i]<<" ";
        cout<<endl;

    
 
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