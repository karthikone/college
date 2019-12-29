#include<iostream>
using namespace std;
class parent{
	public :
		int id;
};
class child : public parent{
	public : 
		int id2;
};
int main()
{
child obj;
obj.id = 2;
obj.id2= 3;
cout<<"Id = "<<obj.id<<endl;
cout<<"Id2= "<<obj.id2<<endl;
}
