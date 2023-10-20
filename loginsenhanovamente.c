#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    char loginSalvo [250]= "adm";
    char senhaSalva [250]= "123456";
    char login [250];
    char senha [250];

do
{
    printf ("informe seu login: ");
    gets (login);

    printf ("Digite sua senha: ");
    gets (senha);


    if (strcmp(login, loginSalvo)== 0 && strcmp (senha, senhaSalva) == 0) {
        printf ("BEM VINDO !");
        break;
    
   }else {
        printf ("LOGIN OU SENHA INVÁLIDOS \n ");
        printf ("TENTE NOVAMENTE .... \n");
           sleep(2);
            system("cls || clear");
    }
    
   
    } while (strcmp(login, loginSalvo)!=0 || strcmp (senha, senhaSalva)!= 0);
    
    
    return 0;
}