#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
 long long a[n],b[n],x=0,m=0;
 for(int i=0;i<n;i++)
    cin>>a[i];
 for(int i=0;i<n;i++)
 {
     cin>>b[i];
     m=max(m,a[i]-b[i]);
 }
  for(int i=0;i<n;i++)
 {
     if(a[i]-b[i]==m||b[i]==0)
        x++;
 }
 if(x==n)
    cout<<"yes"<<endl;
 else
    cout<<"no"<<endl;
}
return 0;
}