#include<iostream>
using namespace std;
int main()
{
	float bs,gs,da,hra;
	cout<<"\n Enter basic salary";
	cin>>bs;
	
	if(bs<1500)
	{
		hra=bs*10/100;
		da=bs*90/100;
	}
	else
	{
		hra=500;
		da=bs*98/100;
	}
	gs=bs+hra+da;
	cout<<"\n gross salary=Rs. "<<gs;
}
