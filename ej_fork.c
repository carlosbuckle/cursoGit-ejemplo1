/* ej_fork.c
   Ejemplo de uso del system call fork
   autor CB
*/

#include <stdio.h>
main(){
  if (fork()==0){
      printf("soy el hijo %i \n", getpid());
      sleep(30);
  } else {
      wait();
      printf("soy el padre %i \n", getpid());
  }
  printf("Final del Programa. Cuántas veces se ejecutó?\n");
}
