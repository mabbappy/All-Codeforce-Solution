    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int tt;
    	cin>>tt;
    	while(tt--){
    		int n;
    		cin>>n;
    		if(n%2==0)
            {
               cout<<n/2<<' '<<0<<' '<<n/2; 
           } 
    		else 
                {
                    cout<<-1;
                }
    		cout<<endl;
    	}
    }