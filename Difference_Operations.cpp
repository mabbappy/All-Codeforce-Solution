#include<bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int ju=0;
		for(int i=2;i<=n;i++)
			{
				if(a[i]%a[1]!=0)
					ju=1;
			}
		if(ju==1)
			{
				cout<<"NO\n";
			}
		else 
			{
				cout<<"YES\n";
			}
	}
	return 0;
}