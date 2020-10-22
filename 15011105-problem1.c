#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){

	int pid = getpid(); // get the pid of current process

	if(pid != 0)
		printf("Child PID is %d, Parent PID is %d",pid,getppid());//print child PID and Parent PID if PId is not 0 sg/e
	else
		printf("Parent PID is %d", getppid()); //print PID when the process is parent pid;
}
