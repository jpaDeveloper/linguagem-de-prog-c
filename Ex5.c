#include <stdio.h>
/*Dado um número inteiro positivo n verificar se é par ou ímpar. Apresente uma mensagem
 na tela informando o número e o resultado. OBS:% utilizado para calcular o resto*/
int main(void){
    int n1 = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if(n1 % 2 == 1)
        printf("O numero eh IMPAR");
    else
        printf("O numero eh PAR");
}
