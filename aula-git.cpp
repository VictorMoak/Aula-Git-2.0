#include <stdio.h>
#include <stdlib.h>

bool menu();

int main () {

    do
    {
        system("cls");
    }while(menu() == true);
    
}

bool menu() {
    int opicao;

    printf("==MENU AULA==\n\n1 - teste\n2 - teste\n3 - sair\n\n");

    scanf("%d", &opicao);

    switch (opicao)
    {
    case 1:
        //teste
        return true;
        break;
    case 2:
        //teste
        return true;
        break;
    case 3:
        return false;
    
    default:
        printf("erro");
        system("pause");
        return true;
        break;
    }
}