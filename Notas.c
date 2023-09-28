#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[250];
    int idade = 0;
    float primeiraNota = 0;
    float segundaNota = 0;
    float terceiraNota = 0;
    float media = 0;

  fflush (stdin);
    printf ("informe seu nome: ");
    fgets(nome, 250, stdin);

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe a primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Informe a segunda nota: ");
    scanf("%f", &segundaNota);

    printf("Informe a terceira nota: ");
    scanf("%f", &terceiraNota);

    media = (primeiraNota + segundaNota + terceiraNota) / 3;


    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Média: %f \n", media);

    if (media < 7) 
    {
        printf("O Aluno está Reprovado.");
    }

    return 0;
}