#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
       /* long long a,b;
        cin>>a>>b;
        long long c=0;
        int x=10;
        if(a<b)
        {
            long long diff=b-a;
            while(diff>=10||diff>=9||diff>=8||diff>=7||diff>=6||diff>=5||diff>=4||diff>=3||diff>=2||diff>=1)
            {
                c++;
                diff-=10;

            }
        }
        else if(a==b)
        {
            c=0;
        }
        else
        {
          long long diff=a-b;
            while(diff>=10||diff>=9||diff>=8||diff>=7||diff>=6||diff>=5||diff>=4||diff>=3||diff>=2||diff>=1)
            {
                c++;
                diff-=10;

            }
        }
        cout<<c<<endl;*/
        long long a,b;
        cin>>a>>b;
        cout<<(abs(a-b)+9)/10<<endl;
    }
}
