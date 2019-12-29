#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter a and b values : \n";
	cin>>a>>b;
	r = a%b;
	try{
		if (r!=0)
		{
			cout<<"Division of "<<a<<" and "<<b<<" is : "<<r;
		}
		else
		{
			throw r; 
		}	
	}
	catch(int x)
	{
		cout<<"Division is not possible ";
	}
	return 0;
}