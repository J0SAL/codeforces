// A. Casimir's String Solitaire

#include <iostream>
using namespace std;
 
 
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();
        int cntA(0), cntB(0), cntC(0);
        for(char i: s){
            if(i=='A') cntA++;
            else if(i=='B') cntB++;
            else cntC++;
        }
        if(cntA+cntC == cntB) cout<<"YES";
        else cout<<"NO";
        cout<<endl; 
    }
    return 0;
}