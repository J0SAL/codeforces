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
    int x; int n;
    cin>>x>>n;
    if(n==0){
        cout<<x; return;
    }
    int k=n-1;
    int q=k/4;
    int r=k%4;
    int pos=x;
    if(x%2 == 0){
        pos -=1;
        pos -= (q*4);
        if(r==1) pos+=n;
        else if(r==2) pos+=((n-1)+(n));
        else if(r==3) pos+=((n-1)+(n-2)-n);
    }else{
        pos +=1;
        pos += (q*4);
        if(r==1) pos-=n;
        else if(r==2) pos-=((n-1)+(n));
        else if(r==3) pos-=((n-1)+(n-2)-n);
    }
    cout<<pos;
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
