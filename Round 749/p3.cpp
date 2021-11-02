#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vi>
#define pb push_back
#define ff first
#define ss second
#define int long long
const int N=1e5+7, MOD=1e9+7;


signed main(){
    fast;
    int t=1;
    while(t--){
        int n,m; cin>>n>>m;
        vs v(n);
        for(string &s: v){
            cin>>s;
        }        
        vi check(m+1,0);
        rep(i,1,n){
            rep(j,1,m){
                if(v[i-1][j]=='X' and v[i][j-1]=='X'){
                    check[j]=1;
                }
            }
        }
        
        rep(i,1,m+1) check[i]+=check[i-1];
        int q; cin>>q;
        while(q--){
            int a,b; cin>>a>>b;
            if(check[b-1]-check[a-1] == 0) cout<<"YES"; else cout<<"NO";
            cout<<endl;
        }
    }
    return 0;
}