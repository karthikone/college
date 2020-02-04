#include<stdio.h>
int main()
{
    int Process[20], Burst_Time[20],Waiting_Time[20],Turn_Arround_Time[20],Priority[20],i,j,Number_Of_Processes,Total=0,Position,Temp,Average_Waiting_Time,Average_Turn_Arround_Time;
    printf("Enter Total Number of Processes : ");
    scanf("%d",&Number_Of_Processes);
    printf("\nEnter Burst Time and Priority");
    for(i=0;i<Number_Of_Processes;i++)
    {
        printf("\nProcess %d : \n",i+1);
        printf("Burst Time : ");
        scanf("%d",&Burst_Time[i]);
        printf("Priority : ");
        scanf("%d",&Priority[i]);
        Process[i] = i+1;    
    }
    for(i=0;i<Number_Of_Processes;i++)
    {
        Position = i;
        for(j=i+1;j<Number_Of_Processes;j++)
        {
            if(Priority[j]<Priority[Position])
                Position = j;
        }
        Temp = Priority[i];
        Priority[i] = Priority[Position];
        Priority[Position] = Temp;

        Temp = Burst_Time[i];
        Burst_Time[i] = Burst_Time[Position];
        Burst_Time[Position] = Temp;

        Temp = Process[i];
        Process[i] = Process[Position];
        Process[Position] = Temp;
    }
    Waiting_Time[0] = 0;
    for(i=1;i<Number_Of_Processes;i++)
        {
            Waiting_Time[i] = 0;
            for(j=0;j<i;j++)
            Waiting_Time[i]+=Burst_Time[j];
            Total+=Waiting_Time[i];
        }
        Average_Waiting_Time = Total/Number_Of_Processes;
        Total = 0;
        printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
        for ( i = 0; i < Number_Of_Processes; i++)
        {
            Turn_Arround_Time[i] = Burst_Time[i]+Waiting_Time[i];
            Total+=Turn_Arround_Time[i];
            printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",Process[i],Burst_Time[i],Waiting_Time[i],Turn_Arround_Time[i]);
        }
        Average_Turn_Arround_Time = Total/Number_Of_Processes;
        printf("\n\nAverage Waiting Time : %d",Average_Waiting_Time);
        printf("\nAverage Trun Arround Time : %d\n",Average_Turn_Arround_Time);
        return 0;        
}