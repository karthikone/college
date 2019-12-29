#include <stdio.h>
void main()
{
    int n,i,r,s;
    /*int n is an integer which stores the left side number eg:5x2=10 'int n' stores 5 value in it.
    int r stores  range of multiplication. if range is 10 multiplication will stops at 5x10=50 'int r' defines the limit eg: if r is 10
    5 x 10=50
    i is initial value=1 which helps to increase  int r value up to wanted limit or range of int r
    'int s' is stores the multiplication result of (n*i)*/


    printf("This Program is Explains the For loop and shows Multiplication Table with given input\nEnter the Value:\n");
    scanf("%d",&n);
    printf("Enter the range of Table:\n");
    scanf("%d",&r);
    for(i=1;i<=r;i=i+1)
    {
        s=(n*i);
        printf("%d  * %d  = %d\n",n,i,s);
    }
}
