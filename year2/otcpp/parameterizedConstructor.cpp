#include<iostream>
using namespace std;
class construcor{
	private :
		int a,b;
	public:
		construcor(int c, int d)
		{
			a = c;
			b = d;
		}
	int getc()
	{
		return a;
	}
	int getd()
	{
		return b;
	}
};
int main()
{
	construcor obj1(10,20);
	cout<<"A value is : "<<obj1.getc()<<endl
		<<"B value is : "<<obj1.getd()<<endl;
	return 0;
}