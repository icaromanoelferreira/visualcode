#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    float peso = 0;
    char sexo = 'm';
    char nome[250];

    // solicitando dados do usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf ("Digite seu peso: ");
    scanf ("%f", &peso);

    fflush (stdin);

printf ("informe seu sexo: ");
scanf ("%c", &sexo);

fflush (stdin);

printf ("Digite seu nome: ");
gets (nome);

system ("cls || clear");

printf ("Idade: %d \n", idade);
printf ("peso: %.2f \n", peso);
printf ("sexo: %c \n", sexo);
printf ("Nome: %s \n", nome);

return 0;

}