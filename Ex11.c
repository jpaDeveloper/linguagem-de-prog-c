#include <stdio.h>
/*Dado um n�mero inteiro positivo n,
 calcular a soma dos n primeiros n�meros naturais.*/
int main(void){
    int n1 = 0, cont, result = 0;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    for(cont = 0; cont <= n1;cont++)
        result = result + cont;
    printf("A soma dos %d primeiros numeros naturais eh: %d", n1, result);
}
