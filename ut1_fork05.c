#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
void main() {
  pid_t pid, pid_hijo2,guardarpid;
  pid = fork();
  if (pid==0)
  {
    pid_hijo2 = fork();
    if (pid_hijo2==0)
    {
      printf("Hola soy el P3 y mi pid es %d y el de mi padre es %d\n", getpid(),getppid());
    }else{
    wait(NULL);
    guardarpid = getpid();
    printf("Hola soy el P2 y mi pid es %d y el de mi padre es %d\n",guardarpid,getppid());
    }
  }else{
  guardarpid = wait(NULL);
  printf("Hola soy el padre mi pid es %d y el de mi hijo es %d\n",getpid(),guardarpid);
  }

}



