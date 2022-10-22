#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int x=6-max(a,b)+1;
	int y=6;
	int g=__gcd(x,y);
	cout<<x/g<<"/"<<y/g<<endl;	
}