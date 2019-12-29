/*
Write a C++ program to use; scope resolution operator.
Display the various values of the same variable declared at difference 
scope value.
*/
#include<iostream>
using namespace std;
int x = 5;//golbal variable
int main()
{
    int x = 3;//Local variable.
    cout<<"The local variable of Outer block is  :"<<x;
    cout<<"\nThe global variable is  : "<<::x<<endl;
    return 0;
}
