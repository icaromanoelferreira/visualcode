#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portugues");

//descrevendo vari�veis
    int numero1 ;
    int numero2 ;
    int resultado ;
    char operacao ; 

// solicitando dados do us�ario
    printf ("informe o primeiro n�mero: ");
    scanf ("%d", &numero1);

    printf ("informe o segundo n�mero: ");
    scanf ("%d", &numero2);
   
   fflush (stdin);

    printf ("informe a opera��o desejada: (+,-,*,/) ");
    scanf ("%c", &operacao);


//se��o de caso, escolha
    switch (operacao)
    {
    case '+':
        resultado = numero1 + numero2;
        break;
    case '-':
        resultado = numero1 - numero2; 
        break;
    case '*':
        resultado = numero1 * numero2; 
        break;
    case '/':
        resultado = numero1 / numero2 ;
        break;
    default:
    printf ("OP��O INV�LIDA!");
    break;    }

// mostrando dados na tela
printf ("Primeiro n�mero: %d\n ", numero1);
printf ("Primeiro n�mero: %d\n ", numero2);
printf ("Resultado: %d\n ", resultado);

return 0;
}