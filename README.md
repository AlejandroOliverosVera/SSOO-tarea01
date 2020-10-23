## SSOO-tarea01
### Este es el repositorio con la entrega de la tarea 1 de Sistemas Operativos

Esta solucion se desarrolla en un codigo en c donde se ocupan 2 funciones, una main que se encarga de recibir la señal SIGUSR1 y de que el codigo no termine y otra funcion llamada handler que se encarga de que cuando la señal sea recibida se haga un fork, luego de este fork, el proceso hijo muestra un mensaje diciendo que la señal fue recibida y muestra la hora y fecha, luego de esto el proceso padre manda un mensaje diciendo que esta listo para recibir nuevamente la señal SIGUSR1.
Gracias al while que se encuentra en la funcion main, el programa no finaliza hasta que se haga ctrl+c.

-Autor: Alejandro Oliveros Vera
-Correo: alejandro.oliveros@alumnos.uv.cl
