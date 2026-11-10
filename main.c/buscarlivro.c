#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int buscarlivro(char nome[], struct info *livro) {
    
char linha[200];
FILE *arquivo_estante;

 arquivo_estante = fopen("estante.txt", "r");

    if(arquivo_estante == NULL) {
     printf("erro\n");
     return 1;
   }

     while(fgets(linha, sizeof(linha),arquivo_estante)!= NULL) {

      printf("%s", linha);
    }
return 0;
}
