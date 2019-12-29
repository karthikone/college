#include<iostream>
#define MAX 100
using namespace std;
int main()
{   
    int*p=NULL;//Pointe initialization to Null.
    //Requesting Memory for variable by using new operator
    p=new(nothrow)int;
    int a[MAX],i;
    if(!p)
    {
        cout<<"Allocation of memory failed.\n";
    }
    else
    {
        /* Store value at allocated address*/
        *p = 29;
        cout<<"*Value of P : "<<*p<<endl; 
    }
    //request block of memory
    //using new operator.
    float *r = new float (75.25);
    cout<<"Value of r : "<<*r<<endl;
    //Rquest block  of memory of size n
    int n = 5;
    int *q = new(nothrow) int[n];
    if(!q)
    {
        cout<<"Allocataion of memory failed\n";
    }
    else
    {   
        for(int i = 0;i<n;i++)
            a[i]= i+1;
            cout<<"Value store in block of memory : ";
                for(i=0;i<n;i++)
                        cout<<a[i]<<" ";
                    
    }

//free the allocated Memory 
delete p;
delete r;
//free the block of allocated memory
delete[] q;
return 0;
}