#include<bits/stdc++.h>
using namespace std;
int main()
{
    //solution 1:--->>>
    int a[2];
    for(int i=0;i<2;i++)
    {
         cin>>a[i];
    }
    int min=a[0];
     for(int i=1;i<2;i++)
     {
         if(min>a[i])
         {
             min=a[i];
         }
     }
     int diff=0;
     int x;
      
          diff=abs(a[0]-a[1]);
      if(diff>1)
      {
          x=diff/2;
      }
      else
      {
          x=0;
      }
      cout<<min<<" "<<x;


      //solution 2:--->>>
      /*int a,b;
      cin>>a>>b;
      int min,x;
      int diff=0;
      if(a>b)
      {
          min=b;
      }
      else
      {
          min=a;
      }
      diff=abs(a-b);
      if(diff>1)
      {
          x=diff/2;
      }
      else
      {
          x=0;
      }
      cout<<min<<" "<<x;*/
      
      }