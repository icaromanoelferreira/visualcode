#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int idade = 0;
    float peso = 0;
    char sexo = 'M';
    char nome [250];

    printf ("Infome sua Idade");
    scanf ("%d", &idade);
    
    printf ("Infome seu Peso");
    scanf ("%f", &peso);
    
    printf ("Infome seu sexo");
    scanf ("%c", &sexo);
    
    printf ("Infome seu nome");
    scanf ("%s", &nome);


    printf ("Idade: %d \n", idade);
    printf ("Peso: %.2f \n", peso);
    printf ("Sexo: %c \n", sexo);
    printf ("Nome: %s \n", nome);

    return 0;

    
}