#include <stdio.h>

int divisores(int n1){
    int cont, div = 0;
    for(cont = 1;cont <= n1;cont++){
        if(n1%cont==0)
            div++;
    }
    return div;
}
int main(void){
    int n1 = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n1);
        if(n1==0)
            printf("Voce nao pode digitar zero!");
        else{
            printf("O numero %d tem %d divisores", n1, divisores(n1));
        }
    }while(n1==0);
}

