#include <stdio.h>
/*Dado um n�mero inteiro positivo n verificar se � par ou �mpar. Apresente uma mensagem
 na tela informando o n�mero e o resultado. OBS:% utilizado para calcular o resto*/
int main(void){
    int n1 = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if(n1 % 2 == 1)
        printf("O numero eh IMPAR");
    else
        printf("O numero eh PAR");
}
