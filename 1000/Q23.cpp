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
 
bool is_prime(int num){

	for(int i=2; i*i<=num; i++){
		if(num%i==0)return false;
	}
 
	return true;
 
}
int next_prime(int x){
	for(int num=x; ;num++){
		if(is_prime(num))
			return num;
	}
	return -1;
	
}
 
 
void solve(){
	int d;
	cin>>d;
 
	int p = next_prime(d+1);
	int q = next_prime(p+d);
 
	cout<<min(1LL*p*p*p, 1LL*p*q)<<nl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
