#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#define Burffer_Size 25
#define Read_End 0
#define Write_End 1
int main()
{
    char Write_Msg[Burffer_Size] = "Greetings.\n";
    char Read_Msg[Burffer_Size];
    int fd[2];
    pid_t pid;
    if(pipe(fd)==-1)
    {
        fprintf(stderr,"Pipe creation has failed.");
        return 1;
    }
    pid = fork();
    if(pid<0)
    {
        fprintf(stderr,"Fork has failed.");
        return 1;
    }
    if (pid>0)
    {
        close (fd[Read_End]);
        write (fd[Write_End],Write_Msg,strlen(Write_Msg)+1);
        close(fd[Write_End]);        
    }
    else
    {
        close(fd[Write_End]);
        read(fd[Read_End],Read_Msg,Burffer_Size);
        printf("Read : %s",Read_Msg);
        close(fd[Read_End]);    
    }
    return 0;    
}