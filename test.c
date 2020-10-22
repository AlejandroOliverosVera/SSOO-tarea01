#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <stdbool.h>

void test(){
        printf("yep");
}

void handler(int num){
        write(STDOUT_FILENO, "La hora: super tarde",21);
        test();
}

void do_nothing(){
        sleep(1);
}

int main (){
	signal(SIGUSR1, handler);
	bool signal_recieved = false;
	printf("Programa hora ejecutandose, PID=%d.\nListo para recibir la senal SIGUSR1\n", getpid());
	while(signal_recieved == false){
		do_nothing();
	}
	return 0;
}
