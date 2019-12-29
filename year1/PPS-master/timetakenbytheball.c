/*
A building has 10 floors with a height of 3 meters each.
A ball is dropped from top of the building.Find the time taken by the ball to reach each floor.
(Use the formula s= ut+(1/2)at^2)
where u = initial velocity
           a = acceleration in m/sec^2(9.8 m/s^2)
*/

#include<stdio.h>
#include<math.h>
main()
{
    int i,n,sec;
    float d,u,a;
    printf("Enter the no.of Time Intervals : \n");
    scanf("%d",&n); //n= no.of time intervals.
for(i=1;i<=n;i++) //this loop will continue untill i reach the limit of n(Time intervals)
{
    printf("Interval : %d \n",i); // indicates the no. of time interval.
    printf("Enter the Time in seconds : \n"); //time
    scanf("%d",&sec);
    printf("Enter the velocity : \n"); //velocity
    scanf("%f",&u);
    printf("Enter the acceleration :  \n"); //acceleration
    scanf("%f",&a);
    d=d+(u*sec+(a*(pow(sec,2)))/2); //formula
}
printf("Total Distance travelled is : %.2f",d);//answer

}

