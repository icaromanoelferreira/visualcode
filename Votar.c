#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // biblioteca para ultilizar os caracteres correto (clica em UTF e seleciona (Western 88591) e coloca essa biblioteca)

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade = 0;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if ((idade <= 18) || (idade >= 65)) // (&& = "e") (|| = "ou")
    {
        printf("N�o � obrigat�rio votar");
    }
    else
    {
        printf("Obrigat�rio votar !");
    }

    return 0;
}
