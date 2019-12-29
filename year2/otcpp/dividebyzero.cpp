#include<iostream>
using namespace std;
class sampleexception
{
	public : 
		sampleexception()
		{
				cout<<"Exception is Constructed. "<<endl;
		}
		~sampleexception()
		{
			cout<<"Distructor is called."<<endl;
		}
};
int main()
{
	try
	{
		sampleexception se;
		throw 1;
	}
	catch(int i)
	{
		cout<<"Exception Occured."<<endl;
	}
	return 0;
		
}