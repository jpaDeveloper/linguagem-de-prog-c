#include <stdio.h>
//Dados três números, imprimi-los em ordem crescente
int main(void){
    int n1 = 0, n2 = 0, n3 = 0, maior = 0, menor = 0, meio = 0;
    printf("Digite 3 numeros com espacos entre eles: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2){
        maior = n1;
        menor = n2;
    }
    else{
        maior = n2;
        menor = n1;
    }
    if(n3 > maior){
        meio = maior;
        maior = n3;
    }

    else if(n3 < menor){
        meio = menor;
        menor = n3;
    }
    else
        meio = n3;
    printf("%d %d %d", maior, meio, menor);









}
