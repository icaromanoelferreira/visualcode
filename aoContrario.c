#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale (LC_ALL, "portuguese");
    int i;

    for (i = 10; i >= 1; i--) {
        printf ("%d x 5 = %d \n", i, i*5);
    }

    return 0;
}