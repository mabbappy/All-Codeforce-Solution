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
           int x=n;
            int f=1;
           while(f)
           {
               if(x%3==0)
               {
                   int a=x/3;
                   int b=a+1;
                   while(f)
                   {
                       if((n-(a+b))>0)
                       {
                           cout<<a<<" "<<b<<" "<<n-(a+b)<<endl;
                          f=0;
                       }
                       else{
                        a--;
                       }
                   }
               }
                else
                   {
                       x++;
                   }
           }
       }
    }