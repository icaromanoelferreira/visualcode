#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {
    setlocale (LC_ALL, "portuguese");
    float nota;
    
    printf ("Digite a nota do aluno: ");
    scanf ("%f", &nota);

    while (nota <0 || nota >10)
    {
         printf ("Digite a nota do aluno: ");
    scanf ("%f", &nota);
    }


    /* do {
        printf ("digite a nota do aluno:");
        scanf ("f", &nota);

    }
    É UTILIZADO O  "DO WHILE QUANDO SE PRECISA DEFINIR EM QUAL PARTE DO TEXTO É NECESSARIO REPETIR"
    */

    printf ("Nota: %.1f \n", nota);

    return 0;
    
}