#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // biblioteca para ultilizar os caracteres correto

int main()
{
    int valor = 0;
    setlocale(LC_ALL, "portuguese"); // c�digo para editar os caracteres
    
    printf("Digite o Valor desejado: ");
    scanf("%d", &valor);

    if (valor == 10)
    { // quando for utilizar a compara��o "Igual" utiliza " == "
        // " != " se usa para utilizar a compara��o de "diferente"
        printf("o valor � igual a 10!");
    }
    else if (valor > 10)
    {
        printf("O valor � maior que 10");
    }
    else if (valor > 5)
    {
        printf("maior que 5!");
    }
    else if (valor > 3)
    {
        printf("maior que 3");
    }
    else
    {
        printf("menor que 3");
    }

    return 0;
}
