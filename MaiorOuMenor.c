#include <stdio.h>
#include <stdlib.h>

int main()
{

    //declarando variaveis 

    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int maior = 0;
    int menor = 0;

//solicitando dados do usuário
    printf("Informe o primeiro número: ");
        scanf("%d", &numero1);

    printf("Informe o segundo número: ");
        scanf("%d", &numero2);

    printf("Informe o terceiro número: ");
        scanf("%d", &numero3);

        system ("cls || clear");

//mostrando dados na tela
    printf("Primeiro número: %d \n", numero1);
    printf ("Segundo número: %d\n", numero2);
    printf ("Terceiro número: %d\n", numero3);

// seção de condicionais
    if ((numero1 > numero2) && (numero1 > numero3)) {
        maior = numero1;
        if (numero2 > numero3)
        {
            menor = numero3;
        }
        else
        {
            menor = numero2;
        }
        }
    
if ((numero2 > numero1) && (numero2 > numero3)) {
        maior = numero2;
        if (numero3 > numero2)
        {
            menor = numero3;
        }
        else
        {
            menor = numero1;
        }
        }
       
       if ((numero3 > numero1) && (numero3 > numero2)) {
        maior = numero3;
        if (numero1 > numero2)
        {
            menor = numero2;
        }
        else
        {
            menor = numero1;
        }
        }








/*
maior = numero1 < numero2 ? numero1 : numero2;
maior = maior > numero3 ? maior ? numero3;
menor = numero1 < numero2 ? numero1 : numero2;
menor = menor < numero3 ? menor ? numero3 :
*/

printf ("Maior %d", maior);

printf ("Menor %d", menor);

return 0;
}