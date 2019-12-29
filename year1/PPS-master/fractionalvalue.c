#include<stdio.h>
#include<math.h>
main()
{
    int i,k,fact=1,x;
    float sum=1;
    printf("Enter the X value : \n");
    scanf("%d",&x);
    printf("Sum of the Series is : \n");
    sum=1;
    for(i=1;i<=5;i++)
    {
        fact=1;
        for(k=1;k<=2*i;k++)
            fact*=k;
            sum+=pow(-1,i)*pow(x,2*i)/fact;
    }
    printf("%f",sum);
    return 0;
}
