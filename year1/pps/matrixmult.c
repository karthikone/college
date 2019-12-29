  #include<stdio.h>
void main()

{

int a[10][10],b[10][10],c[10][10];

int i,j,k,m,n,p,q;

printf("\ Enter the size of Matrix A:");

scanf("%d%d", &m,&n);

printf("\ Enter the size of Matrix B:");

scanf("%d%d", &p,&q);

if(n!=p)

{
printf("Matrix Multiplication not possible.");

exit(0);

}

printf(" Enter the Matrix A values:\n");

for(i=0;i<m;i++)

for(j=0;j<n;j++)

scanf("%d",&a[i][j]);

printf(" Enter the Matrix B values:\n");

for(i=0;i<p;i++)

for(j=0;j<q;j++)

scanf("%d",&b[i][j]);

for(i=0;i<m;i++)

for(j=0;j<q;j++)

{

c[i][j]=0;

for(k=0;k<n;k++)

c[i][j]=c[i][j]+a[i][k]*b[k][j];

}

printf("\n The Matrix A is\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

printf(" %d",a[i][j]);

printf("\n");

}

printf("\n The Matrix B is\n");

for(i=0;i<p;i++)

{

for(j=0;j<q;j++)

printf(" %d",b[i][j]);
printf("\n");

}

printf("\n The Output Matrix C is\n");

for(i=0;i<m;i++)

{

for(j=0;j<q;j++)

printf(" %d",c[i][j]);

printf("\n");

}

}

