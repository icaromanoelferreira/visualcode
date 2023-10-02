#include <stdio.h>
#include <stdlib.h>

int main()
{
// declarando variaveis
    int matricula = 0;
    int nascimento = 0;
    int tempoDeTrabalho = 0;

// solicitando dados do usuario
    printf("informe sua matrícula: ");
    scanf("%d", &matricula);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("informe seu tempo de trabalho: ");
    scanf("%d", &tempoDeTrabalho);

    system ("cls || clear");

    // mostrando dados na tela
    printf ("Matricula: %d \n", matricula);
    printf ("Ano de Nascimento: %d \n", nascimento);
    printf ("Tempo de Trabalho: %d \n", tempoDeTrabalho);

    
    // seção de condicionais
    if ((nascimento <= 1958) && (tempoDeTrabalho >= 30))
{
        printf ("Requerer aposentadoria");
    } else {
        printf ("Não requerer aposentadoria");
    }
    

    return 0;
}