#include<stdio.h>
main()
{
    int a =0,b=1, l=0,counter,sum=0;
    printf("Enter the lenght of series :  \n");
    scanf("%d",&l);
    printf("FIBONACCI SERIES : \n");
    printf("%d %d", a,b);
    for(counter=2;counter<l;counter++)

    {
        sum=a+b;
        printf(" %d",sum);
        a=b;
        b=sum;

    }
}
