#include <stdio.h>
#include <stdlib.h>

void biblioteca() {
    char linha[200];
    FILE *arquivo;

    arquivo = fopen("biblioteca.txt", "r");

    if(arquivo == NULL) {
        printf("Não foi possivel encontrar o arquivo\n");
        system("pause");
        exit(1);
    }
    
    while(fgets(linha, sizeof(linha), arquivo) != NULL) {
        // Leitura linha a linha
    }
    fclose(arquivo); // É uma boa prática fechar o arquivo após o uso
}