#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int a;
		cin>>a;
		string s;
		cin>>s;
		set<int>v;
		for(int i=0;i<a;i++)
		{
			v.insert(s[i]);
		}
		cout<<a+v.size()<<endl;
	}
}