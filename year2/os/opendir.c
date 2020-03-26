#include <stdio.h> 
#include <dirent.h> 
void  main( ) 
{ 
struct dirent *de; // Pointer for directory entry 
// opendir() returns a pointer of DIR type
DIR *dr = opendir("/home/karthik/code/git/college/year2/os"); 
if (dr == NULL) // opendir returns NULL if couldn't open directory 
{ 
printf("Could not open current directory" ); 
} 
	while ((de = readdir(dr)) != NULL) 
		printf("%s\n", de->d_name); 

	closedir(dr); 
} 
