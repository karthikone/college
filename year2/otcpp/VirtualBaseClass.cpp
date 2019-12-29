#include<iostream>
using namespace std;
class A{
            public:
            int a;
        
};
class B : public virtual A {
    public:
    int b;
};
class C : public virtual  A
{
    public:
    int c;        
};
class D :public B,public C {
    public:
        int d;
};
int main()
{
    D obj;
    obj.a = 20;
    obj.b = 25;
    obj.c = 30;
    obj.d = 40;
    cout<<"A value is : "<<obj.a<<endl;
    cout<<"B value is : "<<obj.b<<endl;
    cout<<"C value is : "<<obj.c<<endl;
    cout<<"D value is : "<<obj.d<<endl;
    return 0;
    //testing
}
