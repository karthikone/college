/*Write a c++ program to illustrate the concept of console I/o operation :
A) void get() :
    It is a method of cin object to input a single character from keyboard.
    But its main property is that it allows wide spaces and new line character.

    Syntax :
        char c = cin.get();
    Example : */
#include<iostream>
using namespace std;
int main()
    {
        char c=cin.get();
        cout<<c<<endl;
        return 0;
    }
/*
B) void put() :
    it is a method of cout object and it is used
    to print the specific character on the screen or
    Monitor
    Syntax :
        cout.put(variable/character);
    Example : */
    #include<iostream>
    using namespace std;
    int main()
    {
        char c = cin.get();
        cout.put(c);//Here it prints the value of variable c;
        cout.put('c');//Here it prints the character c
        return 0;
    }
/*
C) getline(char*buffer ,int size):
This is a method of cin object and it is used to input a string with multiple spacces.
Syntax :
    char x[30];
    cin.getline(x,30)
Example : */
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter name : ";
    char c[10];
    cin.getline(c,10);//it takes 10 char as input
    cout<<c<<endl;
    return 0;
}
/*
D)write(char * buffer,int n):
    it is a method of cout object.This method is used to
    read n character from buffer variable
    Syntax :
        cout.write(x,2)
    Example : */
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Name : ";
    char c[10];
    cin.getline(c,10);//it takes 10 character as input.
    cout.write(c,9);//it takes 10 character from buffer c;
    return 0;
}
/*
E) cin :
    It is the method to take input any variable /character/string,
    Syntax :
        cin>>variable/character/String
    Example : */
#include<iostream>
using namespace std;
    int main()
    {
        int num;
        char c;
        string s;
        cout<<"Enter Number : ";
        cin>>num;
        cout<<"Enter char : ";
        cin>>c;
        cout<<"Enter string : ";
        cin>>s;
        return 0;
    }