#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define vi vector<int>
#define v vector
#define pii pair<int,int>
#define pb push_back
#define int long long
#define ff first
#define ss second



void solve()
{
    string s;
    cin>>s;
    char smallest = s[0];
    int idx=0;
    rep(i,1,s.size()){
        char c=s[i];
        if(c<smallest){
            idx=i;
            smallest=c;
        }
    }
    s.erase(s.begin()+idx);
    cout<<smallest<<" "<<s;
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
