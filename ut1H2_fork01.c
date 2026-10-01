#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
pid_t pid ,pid_hijo,pid_nieto ;
pid = fork();
if (pid ==0)
{
  if(getpid()%2==0){
    printf("Hola soy el proceso hijo mi pid es %d , y el de mi padre es %d\n",getpid(), getppid());

  }else{
    printf("Hola soy el proceso hijo mi pid es %d",getpid());
  }


    
}else{ 
 
    pid_hijo = fork();
    if (pid_hijo==0){
     if(getpid()%2==0){
    printf("Hola soy el proceso hijo mi pid es %d , y el de mi padre es %d\n",getpid(), getppid());

  }else{
    printf("Hola soy el proceso hijo mi pid es %d",getpid());
  }
    
      pid_nieto = fork();
      if(pid_nieto==0){
 if(getpid()%2==0){
    printf("Hola soy el proceso nieto mi pid es %d , y el de mi padre es %d\n",getpid(), getppid());

  }else
  {
      printf("Hola soy el proceso nieto mi pid es %d",getpid());
       }
      }
      wait(NULL);
  if(getpid()%2==0){
    printf("Hola soy el proceso hijo2 mi pid es %d , y el de mi padre es %d\n",getpid(), getppid());

  }else
  {
      printf("Hola soy el proceso hijo2 mi pid es %d",getpid());
       }
        
    }else{
wait(NULL);
wait(NULL);
printf("Todos mis hijos ya han terminado");

    }

    

}
}
//hijo1,hijo2 Van a ir igual, nieto y padre si por la existencia de los wait