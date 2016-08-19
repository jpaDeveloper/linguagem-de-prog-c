#include <stdio.h>
//Dado um número positivo n, imprimir seu quadrado
int main(void){
    int n1 = 0, result = 0;
    printf("Digite um numero para saber seu quadrado: ");
    scanf("%d",&n1);
    result = n1*n1;
    printf("O quadrado de %d = %d", n1, result);
}
