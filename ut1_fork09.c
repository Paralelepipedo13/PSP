#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
void main() {
  pid_t pid, pid_hijo2,pid_hijo3;
  pid = fork();
  if (pid==0)
  {
    pid_hijo2 = fork();
    if (pid_hijo2==0)
    {
      printf("Hola soy el P3 y comienzo ahora");
      sleep(2);
      
    }else{
          printf("soy el p3 y acabo ahora");

    wait(NULL);
    printf("Hola soy el P2 y comienzo ahora");
     sleep(5);
    }
    pid_hijo3 =fork();
    if(pid_hijo3==0){
                printf("soy el p2 y acabo ahora");
      wait(NULL);
            printf("Hola soy el P4 y comienzo ahora");
      sleep(4);
                      printf("soy el p4 y acabo ahora");

      wait(NULL);


    }
  }
  exit(0);
}
//No
//wait() con algo para que no deerror al poner numero


