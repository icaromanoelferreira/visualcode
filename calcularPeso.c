#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    char sexo;
    float altura;
    float peso;

    printf("Informe seu G�nero: ");
    scanf("%c", &sexo);

    printf("Informe sua Altura: ");
    scanf("%f", &altura);

    sexo = toupper(sexo);

    switch (sexo)
    {
    case 'F':
        peso = (62.1 * altura) - 44.7;
        break;
    case 'M':
        peso = (72.7 * altura) - 58;
    default:
        ("Op��o inv�lida !");
        break;
    }

    printf("Altura: %.2f \n", altura);
    printf("G�nero: %c \n", sexo);
    printf("Peso Ideal: %.2f \n", peso);

    return 0;
}
