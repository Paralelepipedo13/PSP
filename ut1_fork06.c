#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(){
pid_t pid ,pid_hijo ;
pid = fork(); 
if (pid ==0)
{
    printf("Hola soy el proceso hijo mi pid es %d y mi ppid es %d\n",getpid(), getppid() );
    sleep(10);
    printf("Despierto");
}else{ 
    pid_hijo = fork();
    if (pid_hijo==0)
    {
        printf("Soy el p3 y mi pid es %d y mi ppid es %d", getpid(), getppid());
    }
    else{
wait(NULL);
wait(NULL);
printf("Todos mis hijos ya han terminado");
printf("Hola soy el padre u mi pid es %d y mi ppid es %d\n ",getpid(),getppid());
    }
     }
}
   

