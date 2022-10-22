#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(a!=b&&b!=c&&c!=a)
    {
        cout<<"2";
    }
    else if(a==b&&b!=c||a==c&&b!=a||c==b&&b!=a)
    {
        cout<<"2";
    }
    else
    {
        cout<<"1";
    }
}