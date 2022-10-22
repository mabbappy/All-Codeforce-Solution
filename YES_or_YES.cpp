#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		string s;
		cin>>s;
		int x=s.size();
		int c=0;
		for(int i=0;i<x;i++)
		{
			if(((s[i]=='Y')||(s[i]=='y'))&&((s[i+1]=='E')||(s[i+1]=='e'))&&((s[i+2]=='S')||(s[i+2]=='s')))
			{
				c=1;
			}
		}
		if(c==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}