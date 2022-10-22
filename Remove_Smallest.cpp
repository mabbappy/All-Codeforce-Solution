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
        int a[n];
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
          for(int i=1;i<n;i++)
          {
              if((a[i]-a[i-1])>1)
              {
                  c++;
              }
          }
          if(c==0) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
    }
}