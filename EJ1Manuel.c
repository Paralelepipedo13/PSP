#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
void main() {
  pid_t pid, pid_hijo;
  

  pid = fork();
    if(pid ==0){
     printf("Hola soy el proceso hijo y mi Pid es %d y el pid de mi padre es %d\n", getpid(), getppid());

    }else{
      wait(NULL);
      printf("Hola soy el padre y ahora que mi hijo ha terminado mi pid es %d y el de mi hijo %d\n", getpid(), pid);   }
 
   exit(0);
}

