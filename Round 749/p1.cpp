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


bool is_Prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

signed main(){
    fast;
    int t; cin>>t;
    while(t--){
        string ans;
        int n; cin>>n;
        vi a(n); 
        int summ=0;
        int idx=1;
        rep(i, 0, n){
            cin>>a[i];  
            summ+=a[i];
            if(a[i]%2!=0) idx=i+1;
        } 
        if(is_Prime(summ)){
            cout<<n-1<<endl;
            rep(i,1, n+1){
                if(i == idx) continue;
                cout<<i<<" ";
            }
        }else{
            cout<<n<<endl;
            rep(i, 1, n+1) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
