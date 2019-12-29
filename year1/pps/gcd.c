#include <stdio.h>
void main()
{
   int a, b, c, d;
   printf("Enter two numbers a, b\n");
   scanf("%d%d", &a, &b);
   c = recgcd(a, b);
   printf("The gcd of two numbers using recursion is %d\n", c);
   d = nonrecgcd(a, b);
   printf("The gcd of two numbers using nonrecursion is %d", d);
}
int recgcd(int x, int y)
{
   if(y == 0)
   {
      return(x);
   }
   else
   {
     return(recgcd(y, x % y));
   }
}
int nonrecgcd(int x, int y)
{
   int z;
   while(x % y != 0)
   {
    z = x % y;
    x = y;
    y = z;
   }
   return(y);
}
