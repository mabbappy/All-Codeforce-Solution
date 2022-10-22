#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        vector<int>v;
        int c;
        cin>>c;
        int m=10;
        while(c)
        {
            if(c%m)
        
                v.push_back(c%m),c-=c%m;
                m*=10;
            
        }
        cout<<v.size()<<endl;
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        puts("");
    }
}