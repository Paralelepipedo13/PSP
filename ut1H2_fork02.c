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
            pid_hijo3=fork();
            if(pid_hijo3==0){
              printf ("soy el hijo 4 y mi pid es %d el de mi padre es %d\n y el sumatorio es %d\n",getpid(),getppid(), getpid()+getppid());
            }else{
      wait(NULL);
      printf("Hola soy el P3 y mi pid es %d y el de mi padre es %d\n y el sumatorio es %d\n", getpid(),getppid(),getpid()+getppid());}
    }else{
    wait(NULL);
          printf("Hola soy el P2y mi pid es %d y el de mi padre es %d\n y el sumatorio es %d\n", getpid(),getppid(),getpid()+getppid());

    }
  }else{
  wait(NULL);
  printf("Hola soy el padre mi pid es %d",getpid());
  }

}


