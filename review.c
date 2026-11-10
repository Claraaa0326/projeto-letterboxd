#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastrarLivro(); 

struct info {
    char genero[20];
    char nome[50];
    char autor[50];
    int ano;
    int codigo;
};

void review() {
    
    struct info livro;
    char nome[20] = "moby dick";
    int escolhareview;
    int avaliacao;
    int codigo;

    printf("Digite o nome do livro\n");//digitar o nome do livro
    fgets(livro.nome, sizeof(livro.nome), stdin);
    // guarda na variavel livro.nome, o tamanho maximo é dado por sizeof e stdin é o tipo da entrada, nesse caso o teclado.
    livro.nome[strcspn(livro.nome, "\n")] = '\0';
    // Remove o "Enter" (\n) que o fgets salvou no final da string.
    printf("Nome digitado: %s\n", livro.nome);

    printf("Digite o codigo do livro\n");//digitar o codigo
    fgets(livro.codigo, sizeof(livro.codigo), stdin);
    livro.nome[strcspn(livro.codigo, "\n")] = '\0';
    printf("Codigo digitado: %s\n", livro.codigo);

    if(strcmp(livro.codigo, codigo) != 0) {   
    printf("O livro nao foi encontrado. Deseja cadastra-lo?\n");
    printf("1- sim \n 2- nao\n");
    scanf("%d", &escolhareview);

    if(escolhareview == 1) {
        cadastrarLivro(); // Chama o cadastro direto aqui!
    } else if(escolhareview == 2) {
        return; // Apenas sai da função review e volta para o menu da main normalmente
    }   
    }

    printf("autor: %s\n", livro.autor);
    printf("ano de lancamento: %d\n", livro.ano);
    printf("genero: %s\n", livro.genero);
    
    printf("Avalie o livro (0-5)\n");
    scanf("%d", &avaliacao);

    while(avaliacao < 0 || avaliacao > 5) {
        printf("Avaliacao invalida, digite novamente\n");
        printf("Avalie o livro (0-5)\n");
        scanf("%d", &avaliacao);
    }

    printf("Escreva sua review\n");
    // ler a review e salvar em um arquivo
    printf("Review salva\n");
}