#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
  pid_t pid, pid_hijo;
  
  
  // Se crea un proceso hijo, la función fork() devuelve:
  // un valor negativo -> si se produce cualquier error
  // 0 -> si estamos en el proceso hijo
  // un valor positivo (pid del hijo) -> si estamos en el proceso padre

  pid = fork();
  //Crea un proceso igual al padre pero este devuelve al padre el pid del hijo

  
  if (pid == 0 )  //Nos encontramos en Proceso hijo 
  {        
    printf("Soy el proceso hijo ... \n");	  
  
  }
  else    //Nos encontramos en Proceso padre 
  { 
  
   
   printf("Soy el proceso padre\n");          
  }
   exit(0);
}