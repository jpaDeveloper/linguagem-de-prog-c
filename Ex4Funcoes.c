#include <stdio.h>

int triangulo(int x, int y,int z){
    if((x < (y+z)) && (y < (x+z)) && (z < (y+x))){
        if((x==y) && (x == z))
            printf("O triangulo eh um Equilatero!");
        else if((x==y) || (x==z) ||(z==y))
            printf("O triangulo eh um Isosceles!");
        else
            printf("O triangulo eh um Escaleno!");
    }
    else
        printf("Não é um triangulo!");
    return 0;
}
int main(void){
    int x = 0, y = 0, z = 0;
    printf("Digite 3 medidas de lados:\n");
    do{
        printf("1º lado: ");
        scanf("%d", &x);
        if(x==0)
            printf("\nO valor de X nao pode ser 0!");
    }while(x==0);
    do{
        printf("\n2º lado: ");
        scanf("%d", &y);
        if(y==0)
            printf("\nO valor de Y nao pode ser 0!");
    }while(y==0);
    do{
        printf("\n3º lado: ");
        scanf("%d", &z);
        if(z==0)
            printf("\nO valor de Z nao pode ser 0!");
    }while(z==0);
    triangulo(x, y, z);
}
