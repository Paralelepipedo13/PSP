#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
void main() {
  printf("Inicio\n");
pid_t pid = fork();
printf("Después del fork\n");
if (pid == 0) {
 printf("Soy el hijo\n");
} else {
 printf("Soy el padre\n");
}
printf("Fin\n");

}

// 2 procesos el padre y el hijo
//  El padre dice inicio , despues del fork, crea al hijo,dice soy el padre y fin mientras que el hijo solo dice soy el hijo y fin
//Inicio 1 vez , despues del fork 2 ,soy el hijo 1 , soy el padre 1 y fin 2

