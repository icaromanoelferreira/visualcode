#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    
    // descrevendo variaveis
    int maca = 0 ;
    float macaAtacado = 0;
    float macaVarejo = 0;

    // solicitando dados do us�ario

    printf ("Informe a quantidade de ma�as: ");
    scanf ("%d", &maca);

    macaAtacado = maca * 1.00;
    macaVarejo = maca * 1.30;

    //condicionais 
    if (maca < 12)
    {
        printf ("O valor final �: %.2f", macaVarejo);
    } else {
        printf ("O valor Final �: %.2f", macaAtacado);
    }
    return 0; }