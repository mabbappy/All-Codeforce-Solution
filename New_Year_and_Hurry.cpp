#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   int sum=0,c=0;
   while(b<=240&&c<=a)
   {
       c++;
       b+=5*c;
   }
   cout<<c-1;
}