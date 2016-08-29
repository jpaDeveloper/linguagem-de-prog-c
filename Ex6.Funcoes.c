#include <stdio.h>
int potencia(int x, int z){
 if(z == 0)
    return 1;
 else
    return (x * potencia(x, z-1));
}
int main(void){
 int x = 0, z = 0, resultado;
 printf("Digite um numero para a base: ");
 scanf("%d", &x);
 printf("Digite um numero para o expoente: ");
 scanf("%d", &z);
 resultado = potencia(x, z);
 printf("%d elevado a %d = %d", x, z, resultado);
}

