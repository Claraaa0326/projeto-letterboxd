#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info {
    char nome[50];
    char autor[50];
    int ano;
};

// Protótipos das funções
void biblioteca();
void review();

int main() {
    int escolha = 0;
    
    while(escolha != 6){
        printf("_______ESTANTE COMPARTILHADA______\n\n");
        printf("_______MENU______\n");
        printf("1- Fazer review 📝\n");
        printf("2- Cadastrar novo livro 📖\n");
        printf("3- Listas de desejos ✨\n");
        printf("4- Minhas reviews 📚\n");
        printf("5- Relatório 📊\n");
        printf("6- Sair 🚪\n\n");
        
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        getchar();

        switch (escolha) {
            case 1:
                review();
                break;
            case 2:
                // Função de novo cadastro
                break;
            case 3:
                // Listas de desejos
                break;
            case 4:
                // Minhas reviews
                break;
            case 5:
                // Relatório
                break;
            case 6:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida, digite um número entre 1 e 6.\n\n");
        }
    }
    return 0;
}