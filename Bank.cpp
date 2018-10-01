#include<iostream>
#include<math.h>
using namespace std;
class Input
{
	int T;
	double P;
	public:
		int setT();
		double setP();
};
int Input :: setT()
{
	cin>>T;
	return T;
}
double Input :: setP()
{
	cin>>P;
	return P;
}
class BankA 
{
	int slabs;
	int year;
	public:
		double calculate_emiA(double, int);
};
class BankB 
{
	int slabs;
	int year;
	public:
		double calculate_emiB(double, int);
};
double BankA::calculate_emiA(double p, int t)
{
	cin>>slabs;
	cout<<endl;
	double rate,sum = 0.0;
	int i = 0;
	double emi[slabs];
	while(t!=0)
	{
		cin>>year>>rate;
		cout<<endl;
		emi[i] = p*rate/(1-1/pow((1+rate),(year*12)));
		t = t-year;
	}
	for(int x=0;x<slabs;x++)
		sum = sum + emi[x];
		return sum;
}
double BankB::calculate_emiB(double p, int t)
{
	cin>>slabs;
	cout<<endl;
	double rate,sum = 0.0;
	int i = 0;
	double emi[slabs];
	while(t!=0)
	{
		cin>>year>>rate;
		cout<<endl;
		emi[i] = p*rate/(1-1/pow((1+rate),(year*12)));
		t = t-year;
	}
	for(int x=0;x<slabs;x++)
		sum = sum + emi[x];
		return sum;
}

int main()
{
	BankA bA;
	BankB bB;
	Input input;
	double p = input.setP();
	int t = input.setT();
	if(bA.calculate_emiA(p, t)>bB.calculate_emiB(p, t))
		cout<<"Bank B";
	else if (bA.calculate_emiA(p,t)==bB.calculate_emiB(p, t))
		cout<<"Any one";
	else
		cout<<"Bank A";
		
	return 0;
}
