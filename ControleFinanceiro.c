#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste() {
    system("cls");
    printf("Testando!\n");
    printf("Pressione ENTER para voltar...");
    while (getchar() != '\n'); // limpa buffer
    getchar();                 // espera ENTER
}

void menu() {
    int opcao;

    do {
        do {
            system("cls");
            printf("+----------------+\n");
            printf("|      MENU      |\n");
            printf("+----------------+\n");

            printf("\n1 - Inserir uma Despesa    (-)\n");
            printf("2 - Inserir um Recebimento (+)\n");
            printf("3 - Relatório de Despesas\n");
            printf("4 - Relatório de Recebimento\n");
            printf("5 - Relatório Geral\n");
            printf("6 - Sair\n");

            printf("\nOpção: ");
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > 6) {
            	while (getchar() != '\n'); // limpa ENTER do buffer
                printf("Opção inválida!\n");
                printf("Pressione ENTER para continuar...");
                getchar();
            }

        } while (opcao < 1 || opcao > 6);

        switch (opcao) {
            case 1:
                teste();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }

    } while (opcao != 6);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    menu();
    return 0;
}

