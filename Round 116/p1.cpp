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
    string s; cin>>s;
    int n=s.size();

    char prev, curr;
    int ab_cnt=0;
    int ba_cnt=0;
    rep(i,1,n){
        prev=s[i-1];
        curr=s[i];
        if(prev == 'a' and curr=='b') ab_cnt++;
        if(prev == 'b' and curr=='a') ba_cnt++;
    }
    if((ab_cnt+ba_cnt)%2==0){
        cout<<s;
        return;
    }
    if(ab_cnt>ba_cnt){
        rep(i,0,n){
            if(s[i] == 'a')
                s[i]='b';
                cout<<s;
                return;
        }
    }
    rep(i,0,n){
        if(s[i] == 'b')
            s[i]='a';
            cout<<s;
            return;
    }
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
