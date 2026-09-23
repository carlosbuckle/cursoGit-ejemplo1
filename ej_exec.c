#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){

  char param[20];
  while (strcmp(param, "fin") != 0){
    printf("\nIngrese parámetro para Pru: ");
    scanf("%s",param);

    if (fork()==0){
        execlp("./pru","pru",param,0);
        printf("ERROR. Se produjo al ejecutar EXEC\n");
        exit(-1);
    } else {
        wait(); 
    }
  }
  printf("Fin del programa\n");
}
