#include <stdio.h>

int ler(void){
    int n1 = 0, n2 = 0;
    do{
        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        if(n1<=0)
            printf("Voce deve digitar um valor maior que zero!");
    }while(n1<=0);
    do{
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        if(n2<=0)
            printf("Voce deve digitar um valor maior que zero!");
    }while(n2<=0);
    multiplicar(n1, n2);
}

int multiplicar(int n1, int n2){
    return imprimir(n1* n2);
}

int imprimir(int n){
    printf("%d", n);
}

int main(void){
    ler();
}
