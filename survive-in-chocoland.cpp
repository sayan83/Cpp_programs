#include <iostream>
#include<math.h>
int main() 
{
	int t;
	std::cin>>t;
	while(t--)
    	{
	    int b = 0,r=0,n,k,s;
	    std::cin>>n>>k>>s;
	    int z = floor(s/7.0);
	    while(z--)
	    {
	       if(((r+(6*n)) - (k*6))/k < 1.0)
		{
			b = -1;
			break;
		}
		int t = ceil((7.0*k)/n);
		r  = (t*n)%k;
	    }
	    if(b!= -1)
	    b = ceil(((double)s*k)/n);
	    std::cout<<b<<std::endl;
    	}
	return 0;
}   
