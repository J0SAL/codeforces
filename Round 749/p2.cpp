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
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        unordered_map<int,int> B;
        int a,b,c;
        rep(i,0,k){
            cin>>a>>b>>c;
            B[b]++;
        }
        int root=1;
        while(B[root])root++;
        
        rep(i,1,n+1){
            if(root==i) continue;
            cout<<root<<" "<<i<<endl;
        }        
    }
    return 0;
}