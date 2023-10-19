#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    int numero;
int par = 0;
int impar = 0;
int somaPar = 0;
int quantidaGeral = 0;  
float mediaGeral ;
float somaGeral ;
float mediaPar ;
 do
{
    printf ("Digite o %dº número: ", quantidaGeral+1);
    scanf ("%d", &numero);
       
         if (numero > 0){
            somaGeral += numero;
            quantidaGeral ++;
    
      if (numero % 2  == 0) {
        somaPar += numero;
        par++;
     } else { 
            impar++;
   }
}
} while (numero !=0);
   
   // cast
   mediaGeral = somaGeral / (float) quantidaGeral;
   mediaPar = somaGeral / (float) par;
    
printf ("Quantidade números Impares: %d \n", impar);
printf ("Quantidade números Pares: %d \n", par);
printf ("Quantidade geral: %f \n", mediaGeral);
printf ("Quantidade media par: %f \n", mediaPar);
   


return 0;
}   
   

    