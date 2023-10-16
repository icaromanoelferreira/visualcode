#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;

    for (i = 0; i <= 15; i++)
    {
        if (i % 2 != 0) // if (1% 2 ==1)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}