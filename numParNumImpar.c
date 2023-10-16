#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    int i;
    int numero;
    int par = 0;
    int impar = 0;

    for (i = 1; i <= 5; i++) {
    printf("Digite o %dº número: ", i);
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        par = par + 1;
     } else { 
            impar = impar + 1;
        
    }
    }

printf ("Pares: %d \n ", par );
printf ("Impares: %d \n ", impar);

    return 0;
}