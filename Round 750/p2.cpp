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
    int n;  cin>>n;
    vi a(n);
    int cntOne=0, cntZero=0;
    for(int &i: a) cin>>i;
    for(int i: a){
        if(i==1) cntOne++;
        if(i==0) cntZero++;
    }
    if(cntOne==0){
        cout<<0;
        return;
    }
    int ans = cntOne * pow(2,cntZero);
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
