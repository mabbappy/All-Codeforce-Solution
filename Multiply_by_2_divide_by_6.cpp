    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	long long int tt, n, c;
    	cin>>tt;
    	
    	while(tt--)
    	{
    		cin>>n;
    		c=0;	
    	
    		while(n!=1)	
    		{
    				if(n%6==0)
                    {
                        n/=6;
                         c++;
                    }	
    				else
                    {
                        n*=2;
                         c++;
                    }
    				if(n<0)	
                     {
                         c=-1;
                         break;
                     }
    		}
    			cout<<c<<endl;
    	}	
    	
    	return 0;
    }