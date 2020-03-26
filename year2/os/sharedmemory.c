#include <sys/ipc.h> 
#include <sys/shm.h> 
#include <stdio.h> 
int main() 
{ 
	key_t key = ftok("shmfile",65); // ftok to generate unique key 
	// shmget returns an identifier in shmid 
	int shmid = shmget(key,1024,0666|IPC_CREAT); 
	// shmat to attach to shared memory 
	char *str = (char*) shmat(shmid,(void*)0,0); 
	printf("Write Data : "); 
	scanf("%s",str); 
	printf("Data written in memory: %s\n",str); 
	shmdt(str); //detach from shared memory
	return 0; 
}
