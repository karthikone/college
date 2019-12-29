#include<iostream>
using namespace std;
class dynamic{
	int a,b;
	public : 
		dynamic()
			{
				cout<<"\nConstrucor is Created.\n";
					a = 1;
					b = 2;	
			}
		~dynamic()
			{
				cout<<"Destructor is Called.\n";
			}
		void show()
			{
				cout<<"A = "<<a<<endl
					<<"B = "<<b<<endl;
			}
};
int main()
{
	dynamic *obj1;
	obj1 =  new dynamic;
	obj1 -> show();
	delete obj1;
}