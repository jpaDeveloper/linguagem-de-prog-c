#include <stdio.h>
//8. Calcular a tabuada de um n�mero fornecido pelo usu�rio multiplicado de 0 a 12.
int main(void){
    int n1 = 0, cont;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    for(cont = 0; cont <= 10; cont++)
        printf("\n %d x %d = %d", n1, cont, (cont * n1));
}

