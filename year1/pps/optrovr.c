#include<iostream.h>
class complex
{
private:
int real,imag;
public:
complex(int r=0,int i=0)
{
real=r;
imag=i;
complex operator+(complex const&obj)
{
complex.res;
res.real=real+obj.real;
res.imag=image+obj.imag;
return res;
}
void print()
{
cout<<real<<"+"<<imag<<endl;
}
int main()
{
complex c1(10,5),c2(2,4);
complex c3=c1+ic2;
c3.print;
}
}
}