#include <stdio.h>
/*Dado dois número inteiro positivo n, calcular e imprimir a sua soma*/
int main(void){
    int n1 = 0, n2 = 0, result = 0;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    result = n1 + n2;
    printf("%d + %d = %d", n1, n2, result);

}
