#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int buscarlivro(int codigo_procurado, struct info *livro) {

char linha[200];
FILE *arquivo_estante;

 arquivo_estante = fopen("estante.txt", "r");

    if(arquivo_estante == NULL) {
     printf("erro\n");
     return 1;
   }

     while(fgets(linha, sizeof(linha),arquivo_estante)!= NULL) { 

        char *parte = strtok(linha, "|"); 
         (*livro).codigo = atoi(parte); 

          if((*livro).codigo == codigo_procurado) { 
           parte = strtok(NULL, "|");
           strcpy((*livro).nome, parte);
           parte = strtok(NULL, "|");
           strcpy((*livro).autor, parte);
           parte = strtok(NULL, "|");
           (*livro).ano = atoi(parte);
           parte = strtok(NULL, "|");
           strcpy((*livro).genero, parte);
           

           fclose(arquivo_estante);
           
            return 1;
           } 
           fclose(arquivo_estante);
     }
return 0;
}
