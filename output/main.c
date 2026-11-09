#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info {
char nome[50];
char autor[50];
int ano;
};

void biblioteca() {
 char linha[200];
    FILE *arquivo;

    arquivo = fopen("biblioteca.txt", "r");

      if(arquivo == NULL) {
        printf("nso foi possivel encontrar o arquivo");
        system("pause");
        exit(1);
      }
             while(fgets(linha, sizeof(linha), arquivo) != NULL) {

            }  

        }


void review() {
struct info livro;
char nome[20] = "moby dick";
int escolha;
int avaliacao;

    printf("digite o nome do livro\n");
     fgets(livro.nome, sizeof(livro.nome),stdin);
     livro.nome[strcspn(livro.nome, "\n")] = '\0';
     printf("Nome digitado: %s\n", livro.nome);

   if(strcmp(livro.nome,nome) !=0) {

     printf("o livro nao foi encontrado. Deseja cadastra-lo?\n");
     printf("1- sim \n 2- nao");
      scanf("%d", &escolha);

        if(escolha == 1) {
            //levar para o cadastro;
        }
           else if(escolha == 2) {
             //voltar para o menu;
           }   
    }
          printf("autor: %s\n", livro.autor);
          printf("ano de lancamento: %d\n", livro.ano);

            printf("avalie o livro (0-5)\n");
             scanf("%d", &avaliacao);

              if( avaliacao > 5) {
               printf("avaliacao invalida, digite novamente");
                printf("avalie o livro (0-5)\n");
                 scanf("%d", &avaliacao);
              }

     printf("escreva sua review\n");
      //ler a review e salvar em um arquivo

     printf("review salva\n");
}
//espaço para criar as outras funcoes dos cases

int main () {
 int escolha;
 

printf("______NOME DO PROJETO_______\n");

printf("escrever sobre como funciona a review\n");
printf("\n");
printf("____________________________________________\n");
printf("\n");
printf("_______MENU__________________\n");

printf("1- fazer review\n");
printf("2- cadastrar novo livro\n");
printf("3- hall of fame\n");
printf("4- minhas reviews\n");
printf("5- sair\n");
printf("\n");

printf("escolha uma opcao\n");
scanf("%d", &escolha);
getchar();


switch (escolha) {
case 1:
    review();
    break;

case 2:
// funcao de novo cadastro
    break;

    case 3:
    //hall of fame;
    break;

    case 4: 
    //minhas reviews;
    break;

    case 5:
    //sair
    break;
}

return 0;

}