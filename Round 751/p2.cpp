#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);;
#define v vector
#define pii pair<int,int>
#define pb push_back
#define int long long
#define ff first
#define ss second


void solve()
{
    int n; cin>>n;
    v<int> arr(n);
    unordered_map<int,int> mp;

    // 0th transform
    for(int &i: arr){
        cin>>i;
        mp[i]++;    
    } 
    
    v<int> curr(n), prev(n);
    prev = arr;

    v<v<int>> all_vect;
    all_vect.pb(arr);

    // 1st transform
    rep(i,0,n){
        curr[i] = mp[arr[i]];
    }
    // all transformations till n
    int steps = n;
    while(steps--){
        all_vect.pb(curr);
        prev = curr;
        mp.clear();
        for(int i: curr) mp[i]++;
        rep(i, 0, n) curr[i] = mp[prev[i]];
    }

    int q; cin>>q;
    while(q--){
        int x, k; cin>>x>>k;
        cout<<all_vect[min(k, n)][x-1]<<"\n";
    }
}


signed main(){  
    fast;
    int t; cin>>t;
    while(t--){
        solve();
        // cout<<"\n";
    }
    return 0;
}

