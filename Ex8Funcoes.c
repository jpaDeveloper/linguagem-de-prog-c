#include <stdio.h>

int imparPar(int n1){
    if(n1%2==0)
        return 1;
    else
        return 0;
}

int main(){
    int n1 = 0;
    do{
        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        if(n1<=0)
            printf("\nVoce deve digitar um valor maior que zero!");
    }while(n1<=0);
    if(imparPar(n1))
        printf("O numero %d eh par!", n1);
    else
        printf("O numero %d nao eh par!", n1);
}
