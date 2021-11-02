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
const int N=1e5+7, MOD=1e9;;
 
signed main(){

    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0, b=1;
        if(n!=1){
            a=-(n-1);
            b=n;
        }
        cout<<a<<" "<<b;
        cout<<endl;
    }
    return 0;
}