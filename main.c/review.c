#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info {
    char nome[50];
    char autor[50];
    int ano;
};

void review() {
    
    struct info livro;
    char nome[20] = "moby dick";
    int escolhareview;
    int avaliacao;

    printf("Digite o nome do livro\n");
    fgets(livro.nome, sizeof(livro.nome), stdin);
    livro.nome[strcspn(livro.nome, "\n")] = '\0';
    printf("Nome digitado: %s\n", livro.nome);

    if(strcmp(livro.nome, nome) != 0) {
        printf("o livro nao foi encontrado. Deseja cadastra-lo?\n");
        printf("1- sim \n 2- nao\n");
        scanf("%d", &escolhareview);

        if(escolhareview == 1) {
            // levar para o cadastro;
        } else if(escolhareview == 2) {
            // voltar para o menu;
        }   
    }
    printf("autor: %s\n", livro.autor);
    printf("ano de lancamento: %d\n", livro.ano);

    printf("avalie o livro (0-5)\n");
    scanf("%d", &avaliacao);

    if(avaliacao > 5) {
        printf("avaliacao invalida, digite novamente\n");
        printf("avalie o livro (0-5)\n");
        scanf("%d", &avaliacao);
    }

    printf("escreva sua review\n");
    // ler a review e salvar em um arquivo
    printf("review salva\n");
}