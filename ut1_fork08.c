#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
void main()
{
 pid_t pid1, pid2;
 if (pid1 == 0) {
        pid2 = fork();
  if (pid2 == 0) {
     printf("CCC\n");
        } else {
wait(NULL);       
    printf("BBB\n");
 }
    }
    if(pid1 !=0 || pid2 != 0)
      printf("AAA\n");
    

 exit(0);
}
//Padre 1000 Hijo1 1001 Hijo2 1002
//La salida es AAA CCC BBB CCC NO ya que por las condicionales de los if van a forzar siempre que el padre vaya primero y ejecute el CCC
