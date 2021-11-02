#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

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
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        int temp=1;

        rep(i, 0, 31){
            if(k%2==1){
                ans= (ans + temp)%MOD;
            }
            k/=2;
            temp*=n;
            temp%=MOD;
        }

        cout<<ans;
        cout<<endl;
    }
    return 0;
}
