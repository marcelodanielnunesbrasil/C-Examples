#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

const char ENTER_BUTTON[]  = "\n"; // variavel de retorno de carro (enter)

int main()
{
    int opcao = 0;
    int numero[4];
    int i;
    int j;
    int aux = 0;

    printf("*** PROGRAMA NUMEROS *** %s" , ENTER_BUTTON);
    printf("Selecione a opcao de ordenacao: %s" , ENTER_BUTTON);
    printf("1 -> crescente %s" , ENTER_BUTTON);
    printf("1 -> descrecente %s" , ENTER_BUTTON);
    printf("Entre com a opcao: ");
    scanf("%d", &opcao); // recebe o valor das opcoes acima

    printf("Entre com um numero de 4 digitos [ ex: 1234 ] %s", ENTER_BUTTON);


    for (i = 0; i < 4; i++)
    {
        printf("Entre com o %do digito:", (i + 1));
        scanf("%d", &numero[i]);
    }



    if (opcao == 1){ // CRESCENTE
        for (i = 0; i < 4; i++){
            for (j = i + 1; j < 4; j++){
                if (numero[i] > numero[j]){
                    aux = numero[i];
                    numero[i] = numero[j];
                    numero[j] = aux;
                }
            }
        }

        for (i = 0; i < 4; i++){
            printf("%d %s", numero[i], ENTER_BUTTON);
        }

    }else if(opcao == 2){ // DESCRECENTE
        for (i = 0; i < 4; i++){
            for (j = i + 1; j < 4; j++){
                if (numero[i] < numero[j]){
                    aux = numero[i];
                    numero[i] = numero[j];
                    numero[j] = aux;
                }
            }
        }

        for (i = 0; i < 4; i++){
            printf("%d %s", numero[i], ENTER_BUTTON);
        }
     }else{
         printf("Opcao invalida!");
     }


    getch();
    return 0;
}
