#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

int numero;
float media ;
int soma = 0;
float contador = 0;

do
{
    printf ("Digite o %d� n�mero: ", contador+1);
    scanf ("%d", &numero);

    if (numero > 0) {
        soma += numero;
        contador++;
    }
} while (numero >0);

media = soma / contador; 

printf ("M�dia: %.1f \n", media);


// CTRL + SHIFT + L = SELECIONA TODAS AS VARIAVEIS PARA MODIFICAR

return 0;
}