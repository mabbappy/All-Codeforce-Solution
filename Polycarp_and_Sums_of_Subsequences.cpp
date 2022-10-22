#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		int a[8];
		for(int i=1;i<=7;i++)
		{
			cin>>a[i];
		}
		cout<<a[1]<<' '<<a[2]<<' '<<a[7]-(a[1]+a[2])<<endl;
	}
}