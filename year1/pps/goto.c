#include<stdio.h>
void main()
{
int n;
start:
    printf("This Program Explain goto Statement.If you give -ve number it restart the loop \nEnter Any number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nNegitive no. not allowed.");
        goto start;
    }
        printf("\n Valid Number.");

}
