#include<iostream>
using namespace std;
void multicatch(int );
int main()
{
	cout<<"Testing multicatch"<<endl;
	cout<<"x == 1\n";
	multicatch(1);
	cout<<"x == 0\n";
	multicatch(0);
	cout<<"x == -1\n";
	multicatch(-1);
	return 0;
}
void multicatch (int x)
	{
		try{
			if(x==1)
				throw x;
			else if (x == 0)
				throw x;
			else if(x == -1)
				throw x;
				else
				{
					cout<<"End of the throw!";
				}
				
		}
		catch(...)
				{
					 cout<<"Exception is araised\n";
				}
		

	}