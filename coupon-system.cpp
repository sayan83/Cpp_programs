#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	int r[3][2];
	while(t--)
	{
	    r[0][0] = r[1][0] = r[2][0] = 0;
	    cin>>n;
	    int a[n][3];
	    for(int j = 0;j<n;j++)
	    for(int k = 0;k<3;k++)
	    cin>>a[j][k];
	    for(int i = 0;i<n;i++)
	    {
	        if(a[i][1] == 1)
	        {
	            if(a[i][2] > r[0][0])
	            {
	                r[0][1] = a[i][0];
	                r[0][0] = a[i][2];  
	            }
	            else if(a[i][2] == r[0][0])
	            r[0][1] = min(r[0][1],a[i][0]);
	        }
	        else if(a[i][1] == 2)
	        {
	            if(a[i][2] > r[1][0])
	            {
	                    r[1][0] = a[i][2];
	                    r[1][1] = a[i][0];
	            }
	            else if(a[i][2] == r[1][0])
	            r[1][1] = min(r[1][1],a[i][0]);
	        }
	        else if(a[i][1] == 3)
	        {
	            if(a[i][2] > r[2][0])
	            {
	                    r[2][0] = a[i][2];
	                    r[2][1] = a[i][0];
	            }
	            else if(a[i][2] == r[2][0])
	            r[2][1] = min(r[2][1],a[i][0]);
	        }
	    }
	    for(int i = 0;i<3;i++)
	    {
	        cout<<r[i][0]<<" "<<r[i][1];
	        cout<<endl;
	    }
	    
	}
	return 0;
}
