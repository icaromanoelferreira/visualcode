#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
 setlocale (LC_ALL, "portuguese");

 int i; 

for (i=1; i <= 10; i++){
    printf ("%d x 3 = %d \n", i, i*3);
}

return 0;
}