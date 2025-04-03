 #include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define pb push_back

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int m=n;
        int k, x;
        cin >> k >> x;
        vi ans;
        int sum=0;
        while(n>0 && k>0){
        	if(k!=x && k<=n){
        		int i=n/k;
        		n=n%k;
        		while(i--){
        			ans.pb(k);
        			sum+=k;
        		}
        	}
        	else{
        		k--;
        	}
        }
        if(n==0){
        	cout<<"yes\n"<<ans.size()<<"\n";
        	loop(i,0,ans.size()){
        		cout<<ans[i]<<" ";
        	}
        	cout<<"\n";
        }
        else{
        	cout<<"no\n";
        }
    }
    return 0;
}