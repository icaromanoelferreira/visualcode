#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

    int produto ;
    int pagamento;

    printf ("Informe o valor do produto: ");
    scanf ("%d", &produto);

    printf (" 1 - Pagamento a Vista ");
    printf ("2 - Pagamento a prazo  ");

    printf ("informe a forma de pagamento: ");
    scanf ("%d", &pagamento) ;

    

    // falta terminar 

}