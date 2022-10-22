    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int tt;
    	cin>>tt;
     
    	while (tt--)
    	{
    		string b,c;
    		cin>>b>>c;
    		int r=0;
     
    		for (int i=1; i<c.size();i++)
    		{
    			int k=b.find(c[i])-b.find(c[i-1]);
    			r+=abs(k);
    		}
    		cout<<r<<endl;
    	}
    }