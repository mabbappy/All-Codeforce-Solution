#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i=1;
    while(((a*i)%10!=b)&&((a*i)%10!=0))
    {
        i++;
    }
    cout<<i;
}