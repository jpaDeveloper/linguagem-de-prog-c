#include <stdio.h>
/*Calcular o fatorial de um número fornecido pelo usuário.
    A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
    Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1*/

int main(void){
    int n1 = 0, fatorial = 1, cont = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if(n1 == 0)
        printf("O fatorial de %d: %d", n1, fatorial);
    else{
        fatorial = n1;
        for(cont = n1; cont > 1; cont--){
            fatorial = (fatorial * (cont-1));
        }
        printf("O fatorial de %d: %d", n1, fatorial);
    }

}

