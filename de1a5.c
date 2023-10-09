#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    int i;
int numero;

printf ("Informe um número: ");
scanf ("%d", &numero);

    for (i= 1; i <= 10; i++) {
        printf ("%d x %d = %d \n", i, numero, i*numero);
    }

    return 0;
}