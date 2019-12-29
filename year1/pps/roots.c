#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float  a, b, c, d, root1, root2;
   clrscr();
   printf("Enter the values of a, b, c\n");
   scanf("%f%f%f", &a, &b, &c);
   if(a == 0 || b == 0 || c == 0)
   {
    printf("Error: Roots can't be determined");
   }
   else
   {
    d = (b * b) - (4.0 * a * c);
    if(d > 0.00)
    {
        printf("Roots are real and distinct \n");
        root1 = -b + sqrt(d) / (2.0 * a);
        root2 = -b - sqrt(d) / (2.0 * a);
        printf("Root1 = %f \nRoot2 = %f", root1, root2);
    }
    else if (d < 0.00)
    {
        printf("Roots are imaginary");
        root1 = -b / (2.0 * a) ;
        root2 = sqrt(abs(d)) / (2.0 * a);
        printf("Root1 = %f  +i %f\n", root1, root2);
        printf("Root2 = %f  -i %f\n", root1, root2);
    }
    else if (d == 0.00)
    {
        printf("Roots are real and equal\n");
        root1 = -b / (2.0 * a);
        root2 = root1;
        printf("Root1 = %f\n", root1);
        printf("Root2 = %f\n", root2);
    }
   }
   getch();
}
