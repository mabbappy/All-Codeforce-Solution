    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long int
     
    int main() 
    {
        int tt;
    	cin>>tt;
    	while(tt--)
    	{
    		ll x0,n;
    		cin>>x0>>n;
    		ll n2=n/4*4;
    		while(n2<n)
    		{
    			if(x0%2==0)
    			x0-=n2+1;
    			else
    			x0+=n2+1;
    			n2++;
    		}
    		cout<<x0<<endl;
    	}
    }