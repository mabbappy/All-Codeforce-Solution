#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=0;i<3;i++)
    {
        cout<<a[3]-a[i]<<" ";
    }
}