#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	 cin>>tc;
	while(tc--)
	{
		string a;
		 cin>>a;
		if (a.substr(0,a.length()/2)==a.substr(a.length()/2))
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}