#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x=min((n/m)*b,n*a);
    int y=min((n%m)*a,b);
   cout<<x+y<<endl;
}
