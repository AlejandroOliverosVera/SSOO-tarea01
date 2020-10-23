#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int num){
    if (fork() == 0){
        execl("/usr/bin/date","date",NULL);
    }else{
        write(STDOUT_FILENO, "Esperando señal SIGUSR1\n", 25);
    }
}

void do_nothing(){
    signal(SIGUSR1, handler);
    printf("Esperando señal, PID = %d\n", getpid());
    while(1){
        sleep(1);
    }
}

int main (){
    do_nothing();
    return 0;
}

