#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int  main (int argc, char* argv[])
{
 char* file = argv[1];
 int fd;
 struct flock lock;
 printf ("opening %s\n", file);
 fd = open (file, O_WRONLY); /* Open a file descriptor to the file. */
 printf ("locking\n");
 memset (&lock, 0, sizeof(lock));  /* Initialize the flock structure. */
 lock.l_type = F_WRLCK; /* Place a write lock on the file. */
 fcntl (fd, F_SETLKW, &lock);
 printf ("locked; hit Enter to unlock... ");
 /* Wait for the user to hit Enter. */
 getchar ();
 printf ("unlocking\n");
 /* Release the lock. */
 lock.l_type = F_UNLCK;
 fcntl (fd, F_SETLKW, &lock);
 close (fd);
 return 0;
}
