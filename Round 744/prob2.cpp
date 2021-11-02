// B. Shifting Sort
#include <iostream>
#include <vector>
#include <algorithm>

#define vi vector<int> 

using namespace std;

struct Store{
    int l,r,d;
};
int main(){
    int t; cin>>t;
    while(t--){
        vector<Store> result;
        int n; cin>>n;
        vi v(n); 
        for(int &i: v) cin>>i;

        for(int i=0; i<n; i++){
            int min_idx=i;
            for(int j=i; j<n; j++){
                if(v[j]<v[min_idx]) min_idx=j;
            }
            if(min_idx == i) continue;
            Store temp;
            temp.l=i+1;
            temp.r=min_idx+1;
            temp.d=min_idx-i;
            result.push_back(temp);
            int flag = v[min_idx];
            for(int j=min_idx; j>i; j--){
                v[j] = v[j-1];
            }
            v[i]=flag;
        }
        cout<<result.size()<<endl;
        for(auto i: result){
            cout<<i.l<<" "
            <<i.r<<" "
            <<i.d<<endl;
        }
    }
    return 0;
}