#include <stdio.h>
/*Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.*/
int main(void){
    int ano = 0, idade = 0;
    printf("Digite o ano que nasceu ");
    scanf("%d", &ano);
    idade = 2016 - ano;
    printf("Voce tem %d anos de idade.", idade);

}
