#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
   if (fork() > 0) {
            wait(NULL);
	    printf("Hello world from parent\n");
   } else {
 	    printf("Hello world from child\n");
   }
    return 0;
}
