#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    int i;
    int j;

    for (i = 1; i <= 10; i++) {
        printf ("%d x 5 = %d \n", i, i*5);
    }
    for (j = 1; j <= 10; j++){
        printf ("%d x 7= %d \n", j, j*7);
    }

    return 0;
}