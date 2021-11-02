#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

#define vi vector<int>
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
        int n;
        cin>>n;
        int ans =1;

        rep(i,3,2*n+1) ans = (ans*i)%MOD;
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
