#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

    int prato;
    int quantidade;
    float valor;
   printf ("----------C�RDAPIO DO RESTAURANTE-------------------");
   printf ("C�DIGO            PRATO                        PRE�O");
   printf ("1-|               PICANHA                   R$ 25.00");
   printf ("2-|               LASANHA                   R$ 20.00");
   printf ("3-|               STROGONOFF                R$ 18.00");
   printf ("4-|               BIFE ACEBOLADO            R$ 15.00");
   printf ("5-|               P�O COM OVO               R$ 05.00");
   printf ("Informe um n�mero para saber o prato: ");
    scanf ("%d", &prato);
   printf ("Informe a quantidade: ");
    scanf ("%d", &quantidade);

    switch (prato)
    {
    case 1:
        valor = quantidade * 25.00;
        break;
    case 2:
        valor =  quantidade * 20.00;
        break;
    case 3:
        valor =  quantidade * 18.00;
        break;
    case 4:
        valor = quantidade * 15.00;
        break;
    case 5:
        valor = quantidade * 5.00;
        break;
    default:
    printf ("OP��O INV�LIDA !");
    }

    printf ("o prato escolhido foi: %d", prato);
    printf ("O valor final foi: % f\n", valor);

return 0;

}



/*outra maneira de ser feita 

*/