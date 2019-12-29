#include<stdio.h>
#include<math.h>
main()
{
    int n,x,i,sum=0;
    printf("Enter he Limit : ");
    scanf("%d",&n);
    printf("Enter the value of X : ");
    scanf("%d",&x);
    if(x<0||n<0)
    {
        printf("illegal value");
    }
    else
        {
            for(i=0;i<=n;i++);
            sum=sum+pow(x,i);
            }
        printf("Sum = %d",sum);

}
