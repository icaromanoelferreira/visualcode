#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroNumero = 0;
    int segundoNumero = 0;
    float soma = 0;
    float media = 0;
    int produto = 0;
    int maior = 0;
    int menor = 0;

    printf("Informe o Primeiro Número: ");
    scanf("%d", &primeiroNumero);

    printf("Informe o Segundo Número: ");
    scanf("%d", &segundoNumero);

    soma = primeiroNumero + segundoNumero;
    media = (primeiroNumero + segundoNumero) / 2;
    produto = primeiroNumero * segundoNumero;

    if (primeiroNumero > segundoNumero)
    {
        maior = primeiroNumero;
        menor = segundoNumero;
    }
    else
    {
        maior = segundoNumero;
        menor = primeiroNumero;
    }

    printf("Soma: %f \n", soma);
    printf("Média: %f \n", media);
    printf ("Produto: %d \n", produto);
    printf("Maior número: %d \n", maior);
    printf("Menor número: %d \n", menor);


    /*OPERAÇÃO TERNÁRIA 
    maior = primeiroNumero > segundoNumero ? primeiroNumero: segundoNumero;
    menor = primeiroNumero < segundoNumero ? primeiroNumero: segundoNumero;
    */

    return 0;
}