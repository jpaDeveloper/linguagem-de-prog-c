#include <stdio.h>
//Dada uma sequência de números inteiros não-nulos, começando por 1,imprimir seus quadrados.
int main(void){
    int n1 = 0;
    do{
        printf("Digite um numero: \n");
        scanf("%d", &n1);
        if(n1 == 0)
            printf("\no quadrado do numero %d eh: %d\n", n1, (n1+1));
        else
            printf("\no quadrado do numero %d eh: %d\n", n1, (n1*n1));
    }while(n1 != 0);
}
