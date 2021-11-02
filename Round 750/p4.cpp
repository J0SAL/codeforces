#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define v vector
#define pb push_back
#define ll long long
#define ff first
#define ss second



void solve(){
    int n; cin>>n;
    v<int> a(n);
    for(int &i: a) cin>>i;
    v<int> b(n);
    if(n%2==0){
        for(int i=0; i<n; i+=2){
            b[i] = -1*a[i+1];
            b[i+1] = a[i];
        }
    }else{
        int i=0;
        for( ; i<n-3; i+=2){
            b[i] = -1*a[i+1];
            b[i+1] = a[i];
        }
        // i, i+1, i+2
        int aa,bb,c;
        if(a[i]+a[i+1]!=0){
            aa=i; bb=i+1; c=i+2;
        }else if(a[i]+a[i+2]!=0){
            aa=i; bb=i+2; c=i+1;
        }else{
            aa=i+1; bb=i+2; c=i;
        }
        b[aa] = -1*a[c];
        b[bb] = -1*a[c];
        b[c]   =  a[aa]+a[bb];
    }
    for(int i: b) cout<<i<<" ";
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
