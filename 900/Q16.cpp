#include <iostream>
#include <string>
#include <map>
using namespace std;
#define vi vector<int>
#define sp " "
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nl "\n"

void solve() {
    string s, t;
    cin >> s >> t;
    
    map<char, int> m1, m2;
    for(auto ch : s) m1[ch]++;
    for(auto ch : t) m2[ch]++;
    
    int i = 0, j = 0;
    while(i < s.size() && j < t.size()) {
        if(s[i] == t[j]) {
            if(m1[s[i]] < m2[t[j]]) {
                break;
            }
            
            if(m1[s[i]] == m2[t[j]]) {
                m2[t[j]]--;
                j++;
            }
        }
        
        m1[s[i]]--;
        i++;
    }
    
    if(j == t.size())
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
}

int main() {
    fastio;    
    int t ;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}