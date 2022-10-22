#include<bits/stdc++.h>
    using namespace std;
    #define N 1000005
    int tt,x,n,m,i,j;
    int main(){
        cin>>tt;
        while(tt--){
            cin>>n>>m;
            for(i=1;i<=n;++i){
                for(j=1;j<=m;++j){
                    cout<<((i/2+j/2)&1)<<" "; 
                }
                cout<<endl; 
            }
        }
    } 
    