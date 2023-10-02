#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "portuguese"); // <locale.h>

float maca = 0;
float macaAtacado = 0;
float macaVarejo = 0;  

printf ("Informe o número de maças: ");
scanf ("%f", &maca);


macaVarejo = maca * 1.30;
macaAtacado = maca * 1.00;

if (maca < 12 )
{
    printf ("O valor final: %.2f", macaVarejo);
} else {
    printf ("o Valor final: %.2f", macaAtacado);
}

return 0;
}