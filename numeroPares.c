#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    int i;

    for (i= 2; i <=20; i+=2){
        printf ("%d \n", i);
    }
    for (i=1; i <=20 ; i++){
        if (i % 2 == 0){
            printf ("%d \n", i);
        }
    }
return 0;
}