#include<iostream>
using namespace std;
class AnyName
{
    public :                            //Access specifier.
        string input;                   //Data Member.
    void printname()                    //Member Function.
    {
        cout<< "Input is : "<<input;
    }
};
int main()
{
    AnyName object1;                    //Objcet Declaration.
    object1.input = "Karthik.\n";         //Assignig DataMember.
    object1.printname();                //Using Member function.
    return 0;
}