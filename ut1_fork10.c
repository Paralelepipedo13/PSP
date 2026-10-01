#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
pid_t pid ,pid_hijo ;
pid = fork();
if (pid ==0)
{
      int v1 = 1;

  for(int i=0;i <100;i++ ){
    v1 = v1+i;
  }


    printf("Hola soy el proceso hijo mi pid es %d , la operacion ha sido 1 + 2 + ... y el resultado ha sido %d\n",getpid(), v1);
    
}else{ 
  int v2 = 1;
  for(int i=100;i <200;i++ ){
    v2 = v2+i;
  }
    pid_hijo = fork();
    if (pid_hijo==0)
    {
    printf("Hola soy el proceso hijo 2 mi pid es %d , la operacion ha sido 101 + 102 + ... y el resultado ha sido %d\n",getpid(), v2);
        
    }else{
wait(NULL);
wait(NULL);
printf("Todos mis hijos ya han terminado");

    }

    

}






}