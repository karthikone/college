#include<iostream>
using namespace std;
struct student
    {
        char name[50];
        int roll;
        float marks;
    }s={"Karthik",01,95.3};
int main()
{   /*struct student s; Remove this line form notes.
    This is local variable but we're assined values to global variable so it prints garbage values .
    check this link for more information : https://stackoverflow.com/a/58248705/9880123
    */
    cout<<"\nDisplaying Information : "<<endl;
    cout<<"Name  : "<<s.name<<endl;
    cout<<"Roll  : "<<s.roll<<endl;
    cout<<"Marks : "<<s.marks<<endl;
    return 0;
}
    
