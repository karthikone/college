#include <stdio.h>
void main()
{
   int n, a, b;
   printf("Enter any number\n");
   scanf("%d", &n);
   a = recfactorial(n);
   printf("The factorial of a given number using recursion is %d \n", a);
   b = nonrecfactorial(n);
   printf("The factorial of a given number using nonrecursion is %d ", b);
}
int recfactorial(int x)
{
   int f;
   if(x == 0)
   {
    return(1);
   }
   else
   {
    f = x * recfactorial(x - 1);
    return(f);
   }
}
int nonrecfactorial(int x)
{
   int i, f = 1;
   for(i = 1;i <= x; i++)
   {
      f = f * i;
   }
   return(f);
}
