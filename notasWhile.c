#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;
    int i;
    int numero ;
    float media = 0;

    for (i = 1; i <= 2; i++)
    {
        printf("Digite o %d� n�mero: ", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10)
        {
            printf ("Inv�lido! Tente novamente .... \n");
            printf("Digite o %d� n�mero: ", i);
            scanf("%f", &nota);
        }
    }
    media = (media + nota) / 2;

    printf("m�dia: %1.f \n", media);

    return 0;
}