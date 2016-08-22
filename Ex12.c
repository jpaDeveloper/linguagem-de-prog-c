#include <stdio.h>
//Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
int main(void){
    int n1 = 0, cont=0, impar = 0;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Os %d primeiros numeros impares sao: \n", n1);
    while(impar < n1){
        if(cont % 2 == 1){
            printf("\n%d",cont);
            impar++;
        }
        cont++;
    }
}
