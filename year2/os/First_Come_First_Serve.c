#include<stdio.h>
int main()
{
    int Number_Of_Processes,Waiting_Time[20],Burst_Time[20],Turn_Arround_Time[20],Average_Waiting_Time = 0,Average_Turn_Arround_Time = 0,i,j;
    printf("Enter Total Number of Processes : ");
    scanf("\n%d",&Number_Of_Processes);
    printf("\nEnter Process Burst Time : ");
    for(i=0;i<Number_Of_Processes;i++)
    {
        printf("Process %d : ",i+1);
        scanf("%d",&Burst_Time[i]);
    }
    Waiting_Time[0] = 0;
    for(i = 1;i<Number_Of_Processes;i++)
    {
        Waiting_Time[i] = 0;
        for(j=0;j<i;j++)
            Waiting_Time[i]+=Burst_Time[j];
    }
    printf("\nProcess\t   Burst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<Number_Of_Processes;i++)
    {
        Turn_Arround_Time[i] = Burst_Time[i]+Waiting_Time[i];
        Average_Waiting_Time+=Waiting_Time[i];
        Average_Turn_Arround_Time+=Turn_Arround_Time[i];
         printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,Burst_Time[i],Waiting_Time[i],Turn_Arround_Time[i]);
    }
    Average_Waiting_Time/=i;
    Average_Turn_Arround_Time/=i;
    printf("\nAverage Waiting Time:%d",Average_Waiting_Time);
    printf("\nAverage Turn Arround Time:%d",Average_Turn_Arround_Time);
    return 0;
}