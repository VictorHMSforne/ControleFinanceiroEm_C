#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> 
#include <time.h>

HANDLE saidaConsole; // Para Manipular o console de saída

struct dadosDespesa{
	int Id;
	char Descricao[50];
};


void cadastroDespesa() {
    system("cls");
    
    /* LEMBRETE: PONTEIRO NÃO É COISA AVANÇADA
    // É SÓ UMA VARIÁVEL QUE GUARDA O ENDEREÇO DE OUTRA
    
    & Pega/localiza o endereço da memória
    * Acessa o valor naquele endereço, podendo: criar e depois acessar.
    -> Quando o ponteiro aponta para um atributo da struct
    
    
    time_t segundos; // Aqui vai ser guardado a quantidade de segundos que se passaram desde 01/01/1970
    struct tm *dataAtual; // Tipo de dado que guarda uma data completa, desde: Dia até minuto
    
    segundos = time(NULL); // Solicita que horas são(no caso segundos) para a função
    dataAtual = localtime(&segundos); // Aqui é passado o segundos como parâmetro para transformar em data atual do computador
    
    
    printf("%02d / %02d / %04d  %02d:%02d\n", 
			dataAtual ->tm_mday, 
			dataAtual ->tm_mon + 1, 
			dataAtual ->tm_year + 1900, 
			dataAtual ->tm_hour, 
			dataAtual ->tm_min);
    //%02d formatação dos números, ou seja, completa com 0 caso não tenha nada, mostrando assim 2 dígitos ou 4
    
    */
    
    struct dadosDespesa despesas; //Supostamente instancia de um objeto
    
    FILE *arquivo;
    
    
	SetConsoleTextAttribute(saidaConsole, 12);
	
    printf("+--------------------------------+\n");
    printf("|      Cadastro de Despesas      |\n");
    printf("+--------------------------------+\n");
    SetConsoleTextAttribute(saidaConsole, 7);
    
    arquivo = fopen("arquivoDeDespesas.txt","W");
    
    if(arquivo == NULL)
    	printf("Não foi possível criar o arquivo!");
    
    while (getchar() != '\n');
    
    printf("Digite uma descrição: \n");
    fgets(despesas.Descricao, sizeof(despesas.Descricao), stdin);
    despesas.Descricao[strcspn(despesas.Descricao,"\n")] = '\0';
    
    printf("%s\n", despesas.Descricao);
    
    printf("Pressione ENTER para voltar...");
    
     
    getchar();                 
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
                cadastroDespesa();
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
    saidaConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    menu();
    return 0;
}

