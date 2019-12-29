#include<stdio.h>
void main()
{
         int m1,m2,m3,m4,m5,m6,total;
         float per;
         printf("Enter  6 Subjects marks.");
         scanf("%d%d%d%d%d%d",&m1,&m2,&m3, &m4, &m5, &m6);
         total=m1+m2+m3;
         per=(total/600.0)*100;
         if(per<40)
         printf("The Candidate has Failed:");
        else if(per>=70&&per<=100)
        printf("The Candidate has got First Class with Distinction :");
        else  if(per>=60&&per<=70)
        printf("The Candidate has got First Class :");
        else if(per>=50&&per<=60)
                 printf("The Candidate has got Second Class :");
        else if(per>=40&&per<=50)
                 printf("The Candidate has got Third Class :");


}
