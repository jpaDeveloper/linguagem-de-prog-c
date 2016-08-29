#include <stdio.h>

int somaPrimos(int n1){
    int cont, cont2 = 1, div = 0, primos = 0, soma = 0;
    while(primos < n1){
        for(cont = 1;cont <= cont2;cont++){
            if(cont2%cont==0)
                div++;
        }
        if(div==2){
            soma = cont2 + soma;
            printf("%d ",cont2);
            primos++;
            if((cont >= cont2) && (primos < n1))
                printf("+ ");
        }
        div = 0;
        cont2++;
    }
    return soma;
}
int main(void){
    int n1 = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n1);
        if(n1==0)
            printf("Voce nao pode digitar zero!");
        else{
            printf(" = %d", somaPrimos(n1));
        }
    }while(n1==0);

}
