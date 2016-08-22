#include <stdio.h>
// Dados um inteiro x e um inteiro não-negativo n, calcular x n.
int main(void){
    int base = 0, expoente = 0, cont, result = 0;
    printf("Digite um numero para base: \n");
    scanf("%d", &base);
    do{
        printf("Digite um numero para expoente: \n");
        scanf("%d", &expoente);
        if(expoente < 0)
            printf("O expoente nao deve ser negativo!\n");
    }while(expoente < 0);
    result = base;
    for(cont = 1;cont < expoente;cont++)
        result = result * base;
    printf("\nO valor de %d elevado a %d: %d", base, expoente, result);
}
