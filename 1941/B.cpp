#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;cin>>n;
    while(n--){
        int s;cin>>s;
        vector<int>v(s);
        for(auto&x:v)cin>>x;
        bool possible=true;
        for(int i=1;i<s-1;i++){
            if(v[i-1]!=0){
                if(v[i-1]*2>v[i]){
                    possible=false;break;
                }else {
                    v[i]-=2*v[i-1];
                    v[i+1]-=v[i-1];
                }
            }
        }
        if(possible&&v[s-1]==0&&v[s-2]==0){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
}