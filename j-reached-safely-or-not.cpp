#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i= 1;i<=t;i++)
	{
	        int m,n,rx,ry,l,x=0,y=0;
	        cin>>m>>n;
	        cin>>rx>>ry;
	        cin>>l;
	        string d;
	        cin>>d;
	        while(l--)
	        {
	                if(d[l] == 'L')
	                  x--;
	                else if(d[l] == 'R')
	                  x++;
	                else if(d[l] == 'U')
	                  y++;
	                else if(d[l] == 'D')
	                  y--;
	        }
	        if(x == rx && y == ry)
	        cout<<"Case "<<i<<": REACHED";
	        else if(x<0 || y<0 || x>m || y > n)
	        cout<<"Case "<<i<<": DANGER";
	        else
	        cout<<"Case "<<i<<": SOMEWHERE";
	        cout<<endl;
	}
	return 0;
}
