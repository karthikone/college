#include<iostream>
using namespace std;
class name{
    public : 
        string name;
        int id;
    void printname();
    void printid(){
        cout<<"Your ID is : "<<id;
    }
};
void name::printname()
{
    cout <<"Your Name is : "<<name;
}
int main()
{
    name object1;
    object1.name = "karthik.\n";
    object1.id   = 15;
    object1.printname();
    object1.printid();
    return 0;
}