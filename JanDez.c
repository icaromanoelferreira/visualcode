#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int mes;

    printf("Digite um n�mero para saber o m�s: ");
    scanf("%d", &mes);

    switch /* (similar a "escolha" /*/ (mes)
    {
    case 1: /* (similar a "caso" ) /*/ 
        printf("janeiro. \n");
        break; // (Representa o "pare") (para ele não invadir o espaço dos outros caracteres)
    case 2:
        printf("Fevereiro. \n");
        break;
    case 3:
        printf("Mar�o. \n");
        break;
    case 4:
        printf("Abril. \n");
        break;
    case 5:
        printf("Maio. \n");
        break;
    case 6:
        printf("Junho. \n");
        break;
    case 7:
        printf("Julho. \n");
        break;
    case 8:
        printf("Agosto. \n");
        break;
    case 9:
        printf("Setembro. \n");
        break;
    case 10:
        printf("Outubro. \n");
        break;
    case 11:
        printf("Novembro. \n");
        break;
    case 12:
        printf("Dezembro. \n");
        break;
    default: // (similar a "outroCaso")
        printf("Op��o Inv�lida: ");
    }
    return 0;
}