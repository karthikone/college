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
	msgid = msgget(key, 0666 | IPC_CREAT); // msgget creates a message queue and returns id
	message.mesg_type = 1; 
	printf("Write Data : "); 
	gets(message.mesg_text); 
	msgsnd(msgid, &message, sizeof(message), 0); // msgsnd to send message 
	printf("Data send is : %s \n", message.mesg_text); // display the message 
	return 0; 
}
