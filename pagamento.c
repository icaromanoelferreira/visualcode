#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
float valorProduto ;
int opcao ;
float desconto ;
float precoFinal ;
int parcelas ;
float valorPorParcela;

    printf ("Digite o valor do produto: ");
    scanf ("%f", &valorProduto);

    printf ("Escolha uma das opções abaixo: /n");
    printf ("1- Pagamento á vista \n");
    printf ("2- Pagamento á Prazo \n");
    printf ("Digite a opção desejada: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1: 
    desconto = valorProduto * 0.1;
    precoFinal = valorProduto - desconto;
    printf ("Valor do Produto: R$ %2.f \n", valorProduto);
    printf ("Forma de Pagamento: a vista \n" );
    printf ("Valor do desconto: R$ %.2f \n", desconto);
    printf ("Total a Pagar: R$ 2.f \n", precoFinal);
            break;
            case 2:
    do {
        printf ("digite a quantidade de parcelas; ");
        scanf ("%d", &parcelas);


        if (parcelas > 6) {
            printf ("O Parcelamento não pode ser maior que 6 parcelas \n");
            printf ("Tente novamente \n \n!!! ");
        }
    } while (parcelas > 6);
    valorPorParcela = valorProduto / parcelas;
    precoFinal = valorProduto;
printf ("Valor do produto: R$ %2.f \n", valorProduto);
printf ("Forma de Pagamento: a Prazo /n" );
printf ("Quantidade de Parcelas : %d \n", parcelas);
printf ("valor por Parcelas: R$ %.2f \n", valorPorParcela);
printf ("Total a Pagar: R$ %.2f \n", precoFinal);
break;  
    default:
        break;
return 0; 
}