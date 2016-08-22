#include <stdio.h>
/*Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores,
 ao final deverá ser exibido o resultado da operação*/
int main(void){
    int n1 = 0, n2 = 0;
    int opcao = 6; //Inicializa com uma opcao invalida
    do{
        printf("\nEntre com a operacao desejada: \n(1)...Divisao\n(2)...Resto da Disisao\n(3)...Adicao\n(4)...Multiplicacao\n(0)...Sair\n");
        scanf("%d", &opcao);
        if((opcao == 1) || (opcao == 2)){
            printf("Digite o primeiro numero: \n");
            scanf("%d", &n1);
            do{
            printf("Digite o segundo numero: \n");
            scanf("%d", &n2);
            if(n2 == 0)
                printf("Impossivel realizar divisao por zero!\n");
            }while(n2 == 0);
        }
        else if((opcao == 3) || (opcao == 4)){
            printf("Digite o primeiro numero: \n");
            scanf("%d", &n1);
            printf("Digite o segundo numero: \n");
            scanf("%d", &n2);
        }

        switch(opcao){
        case 1:
            printf("%d / %d = %d\n", n1, n2, (n1/n2));
            break;
        case 2:
            printf("%d resto %d = %d\n", n1, n2, (n1%n2));
            break;
        case 3:
            printf("%d + %d = %d\n", n1, n2, (n1+n2));
            break;
        case 4:
            printf("%d * %d = %d\n", n1, n2, (n1*n2));
            break;
        default:
            if(opcao == 0)
                printf("Voce escolheu sair!");
            else
                printf("Selecione uma opcao valida!\n");
        }
    }while(opcao != 0 );
}
