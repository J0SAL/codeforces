#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define vi vector<int>
#define vs vector<string>
#define vvs vector<vs>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vi>
#define pb push_back
#define int long long
#define ff first
#define ss second


void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int ans=(a*1+b*2+c*3)%2;
    cout<<ans;
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
