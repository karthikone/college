#include<iostream>
using namespace std;
void divide (int ,int ,int);
int main()
{
	try{
		cout<<"We're inside the try block!"<<endl;
		divide(10,20,30);
		divide(10,10,20);
	}
	catch(int x)
	{
	 	cout<<"Exception is araised."<<endl;
	}
	return 0;
}
void divide (int x, int y,int z)
{
	cout<<"inside divide funciton!"<<endl;
	if((x-y)!=0)
	{
		int r = z/(x - y);
		cout<<"Result : "<<r<<endl;
	}
	else
	{
		throw(x - y);
	}
	
}