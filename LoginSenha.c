#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char loginSalvo [250]= "adm";
    char senhaSalvo [250]= "12345";
    char login [250];
    char senha [250];

    printf ("Informe seu login: ");
    gets (login);
    printf ("Digite sua senha: ");
    gets (senha);

    if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalvo)==0) {
        printf ("BEM VINDO!");
    } else  {
     printf ("LOGIN OU SENHA INVALIDOS");
    }
        return 0; 
    }