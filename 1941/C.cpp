#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        string s;cin>>s;
        int count=0;
        for(int i=0;i<x;i++){
            string st = s.substr(i,3);
            if(st=="pie"||st=="map"){
                count++;
                i+=2;
            }
        }
        cout<<count<<'\n';
    }
}