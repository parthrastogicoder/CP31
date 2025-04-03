#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define ff first
#define ss second

void solve(){
    int n;
    cin>>n;
    
    vi arr(n+1);
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    
    int l=-1, r=-1;
    
    for(int i=1; i<=n; i++){
        if(arr[i] != 0){
            if(l==-1 && r==-1){
                l=r=i;
            }else{
                r=i;
            }
        }
    }
    
    if(l==-1 && r==-1){
        cout<<0<<nl;
    }else{
        for(int i=l; i<=r; i++){
            if(arr[i] == 0){
                cout<<2<<nl;
                return;
            }
        }
        cout<<1<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}