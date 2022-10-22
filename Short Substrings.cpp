#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        string s;
        cin>>s;
        int i;
        int x=s.size();
        cout<<s[0];
        for(int i=1;i<x;i+=2)
        {
              cout<<s[i];
        }
        cout<<endl;
    }
}
