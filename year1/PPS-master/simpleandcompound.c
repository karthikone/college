#include<stdio.h>
#include<math.h>
int main()
{
    float p,q,r,si,ci;
    int n;
    printf("Enter the value of Principal p:");
    scanf("%f",&p);
    printf("\nEnter the value of rate:");
    scanf("%f",&r);
    printf("\nEnter the value of Period:");
    scanf("%d",&n);
    si = ((p*r*n)/100);
    q=1+(r/100);
    ci=p*pow(q,n)-p;
    printf("Simple interest is : %f",si);
    printf("\nCompound Interest is : %f",ci);
    return 0;
    }
