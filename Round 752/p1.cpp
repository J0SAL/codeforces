#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);;
#define v vector
#define pii pair<int,int>
#define pb push_back
#define int long long
#define ff first
#define ss second


void solve(){
    int n; cin>>n;
    int flag_max=0;
    int ans=0;
    rep(i,1, n+1){
        int ele; cin>>ele;
        if(ele>i){
            ans = max(ans,ele-i);
        }
    } 
    cout<<ans;
}



signed main(){  
    fast;
    int t; cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}

