#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20; // usa a letra "D" para número inteiros
     float peso = 80.2; // Real
      char sexo = 'F'; // quando for só um caracter, só precisa de uma aspas
       char nome[250] = "Marta"; // máximo de até 2.000 caracter

       // Pode ser também : printf ("Idade: %d anos, meu peso 2.f", idade, peso)
        printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo); // se usa "C" para um caracter
    printf("Nome: %s \n", nome); // se usa "S" quando for mais de um caracter
    // Pode ser também ("\n idade: %d, idade")

    return 0;
}