#include<iostream.h>
#include<conio.h>
class example
{
private:
int a,b;
public:
void getdata()
{
cout<<"enter a value of a";
cin>>a;
}
friend void findmax(example,example);
};
if(e1.a>e2.a)
{
cout<<"data of obj e1 is greater";
else
if(e1.a<e2.a)
{
cout<<"data of obj e2 is greater";
else
cout<<"e1 and e2 are equal";
}
int main()
{
example e1,e2;
cout<<"enter data for e1"<<e1<<endl;
e1.get data();
cout<<"enter data for e2"<<e2<<endl;
e2.get data();
max(e1,e2);
getch();
return 0;
}
}