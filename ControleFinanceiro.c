#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

menu(){
	printf("+----------------+\n");
	printf("|      MENU      |\n");
	printf("+----------------+\n");
	
	printf("\nSelecione uma opção: \n");
	
	printf("\n1 - Inserir um valor Gasto\n");
	printf("2 - Inserir um valor de Entrada\n");
	printf("3 - Relatório de Gastos\n");
	printf("4 - Relatório de Entradas\n");
	printf("5 - Sair\n");
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	menu();
	
}
