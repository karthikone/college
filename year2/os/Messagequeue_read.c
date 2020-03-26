#include <stdio.h> 
#include <sys/ipc.h> 
#include <sys/msg.h> 
// structure for message queue 
struct mesg_buffer 
{ 
	long mesg_type; 
	char mesg_text[100]; 
} message; 
int main() 
{ 
	key_t key; 
	int msgid; 
	key = ftok("progfile", 65); // ftok to generate unique key 
	msgid = msgget(key, 0666 | IPC_CREAT); // msgget creates a message queue  and returns id
	msgrcv(msgid, &message, sizeof(message), 1, 0); // msgrcv to receive message 
	printf("Data Received is : %s \n");  // display the message 
	(message.mesg_text); 
	msgctl(msgid, IPC_RMID, NULL); // to destroy the message queue 
	return 0; 
}
