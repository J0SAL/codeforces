#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define v vector
#define pb push_back
#define ll long long
#define ff first
#define ss second



void solve(){
    int n; cin>>n;
    string s; cin>>s;
    set<char> st;
    for(char c: s) st.insert(c);
    int global_min=n+1;

    for(char curr: st){
        int i=0, j=n-1;
        int minn=0;
        while(i<j){
            if(s[i]==s[j]){
                i++; j--;
            }
            else{
                if(s[i] == curr){
                    minn++; i++;
                }
                else if(s[j] == curr){
                    j--; minn++;
                }
                else{
                    minn=n+1;
                    break;
                }
            }
        }
        global_min = min(minn, global_min);
    }
    if(global_min == n+1) cout<<-1;
    else cout<<global_min;
}


signed main(){  
    fast;
    int t; cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
