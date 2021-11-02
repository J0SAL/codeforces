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
    int n,k; cin>>n>>k;
    int updated=1;
    int hours=0;
    while(updated<n){
        if(updated<k){
            updated*=2;
            hours++;
        }
        else{
            int remain = n-updated;
            hours += remain/k;
            if(remain%k!=0) hours+=1;
            break;
        }
    }
    cout<<hours;

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
