#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    menu();
}

void menu () {
    int op;
    
    printf("Menu");

    printf("1 - Inicia");

    printf("Escolha uma das opção");
    scanf("%d", &op);
}