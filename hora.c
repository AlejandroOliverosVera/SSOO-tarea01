#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

//Funcion encargada de decidir que va a pasar cuando se reciba la señal
void handler(int num){
    if (fork() == 0){ //codigo para el proceso hijo el cual muere al terminar de dar la hora
        write(STDOUT_FILENO, "Señal SIGUSR1 recibida: ", 25);
	execl("/usr/bin/date","date", "+'%a %b %e %H:%M:%S %Z %Y'",NULL);
    }else{ //codigo para que el proceso padre avise al usuario que esta esperando la señal
	sleep(1);
        write(STDOUT_FILENO, "Esperando señal SIGUSR1\n", 27);
    }
}

int main (int argc, const char * argv[]){
    signal(SIGUSR1, handler);
    printf("Programa hora ejecutandose. PID = %d\n", getpid());
    printf("Listo para recibir la señal SIGUSR1.\n");
    //Este while es para que el proceso padre no muera hasta que se haga ctrl+c
    while(1){
        sleep(1);
    }
    return 0;
}
