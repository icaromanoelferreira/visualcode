#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portugues");

//descrevendo variáveis
    int numero1 ;
    int numero2 ;
    int resultado ;
    char operacao ; 

// solicitando dados do usúario
    printf ("informe o primeiro número: ");
    scanf ("%d", &numero1);

    printf ("informe o segundo número: ");
    scanf ("%d", &numero2);
   
   fflush (stdin);

    printf ("informe a operação desejada: (+,-,*,/) ");
    scanf ("%c", &operacao);


//seção de caso, escolha
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
    printf ("OPÇÃO INVÁLIDA!");
    break;    }

// mostrando dados na tela
printf ("Primeiro número: %d\n ", numero1);
printf ("Primeiro número: %d\n ", numero2);
printf ("Resultado: %d\n ", resultado);

return 0;
}