    #include <iostream>
    using namespace std;
     
    int main() {
     
    	int tt;
    	int even;
    	long long n;
    	cin>>tt;
    	while(tt--) {
    		even= -1;
    		cin>>n;
    		if(n%2 == 0)
            {
    			cout<<"0"<<endl;
            }
    		else 
            {
    			while(n!=0)
                 {
    				if((n%10)%2 == 0) 
                    {
    					even= 2;
    					if(n<10)
                        {
    						even--;
                        }
    				}
    				n=n/10;
    			}
    			cout<<even<<endl;
    		}
    	}
     
    	return 0;
    }