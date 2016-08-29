#include <stdio.h>

int fatorial(n1) {
if ((n1==1) || (n1==0))
    return 1;
   else
      return fatorial(n1-1)*n1;
}
int main (void){
    int n1 = 0;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("\nO fatorial de %d eh %d \n", n1, fatorial(n1));
}
