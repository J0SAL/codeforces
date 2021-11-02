#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define v vector
#define pb push_back
#define int long long
#define ff first
#define ss second

const int N=1e9+5;  

void solve(){
    int n; cin>>n;
    v<int> a(n);
    bool flag=0;
    rep(i,0,n){
        cin>>a[i];
        if(i!=0 and a[i-1]>=a[i]){
            flag=1;
        }
    } 
    if(n%2==0 or flag) cout<<"YES";
    else cout<<"NO";
}


signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fast;
    int t; cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
