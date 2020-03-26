#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
	int fd1;
	char  * myfifo = "/home/kone/code/local/file.txt";
	mkfifo(myfifo, 0666);
	char str1[80],str2[80],Conformation_Flag;
	
		//Shows what's in file.
		fd1 = open(myfifo,O_RDONLY);
		read(fd1,str1,80);
		printf("Text : %s",str1);
		close(fd1);
		printf("Edit? (y/n) : ");
		scanf("%c",&Conformation_Flag);
		if(Conformation_Flag == 'y')
		{	
			fgetc(stdin);
			fd1 = open(myfifo,O_WRONLY);	
			printf("Enter the String : ");		
			fgets(str2,80,stdin);			
			write(fd1,str2 ,strlen(str2)+1);			
			close(fd1);
		}
		else if(Conformation_Flag == 'n')
		{
			printf("\n");
			exit(0);

		}
		else
		{
			printf("Invalid Option!\n");
		}
	             

return 0;
}

