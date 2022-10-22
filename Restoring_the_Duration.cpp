#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
         int n;
    cin>>n;
    int a[200005],b[200005];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
         cin>>b[i];
    }
     for(int i=1;i<=n;i++)
     {
         if(i==1)
         {
             cout<<b[i]-a[i]<<" ";
         }
         else
         {
             cout<<b[i]-max(b[i-1],a[i])<<" ";
         }
     }
     cout<<endl;
    }

}