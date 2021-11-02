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

const int N=1e5+7, MOD=1e9+7;  

void solve(){
    int n; cin>>n;
    vi a(n);
    int summ=0;
    for(int &i: a){
        cin>>i;
        summ+=i;
    }
    int req = 2*summ/n;
    if(n*req!=2*summ){
        cout<<0;
        return;
    }

    map<int, int> mp;
    int cnt=0;
    for(int i:a){
        cnt+=mp[req-i];
        mp[i]++;
    }
    cout<<cnt;
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
