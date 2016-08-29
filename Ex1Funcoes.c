#include <stdio.h>
#include <conio.h>
//Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo, 0 em caso contrário.
int primo(int n1){
    int cont, div = 0;
    for(cont = 1;cont <= n1;cont++){
        if(n1%cont==0)
            div++;
    }
    if(div==2)
        return 1;
    else
        return 0;
}
int main(void){
    int n1 = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n1);
        if(n1==0)
            printf("Voce nao pode digitar zero!");
        else{
            if(primo(n1))
                printf("O numero %d eh primo!", n1);
            else
                printf("O numero %d nao eh primo!", n1);
        }
    }while(n1==0);
}
