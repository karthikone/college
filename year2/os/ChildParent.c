#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();	if(pid==-1)
	{
		fprintf(stderr,"Fork failed");
	}
	else if(pid==0)
	{
		 printf("Child process\n");
	}
	else if (pid > 0)
	{
		printf("Parent process");
	}
}
