#include <stdio.h>
#include <conio.h>

const char ENTER_BUTTON[]  = "\n"; // variavel de retorno de carro (enter)

int main()
{
    int numero[4];
    int i;
    int j;
    int aux = 0;

    //Mensagem de boas vindas
    printf("*** PROGRAMA NUMEROS *** %s" , ENTER_BUTTON);
    printf("Entre com um numero de 4 digitos maiores ou iguais a 0 [ ex: 1234 ] %s", ENTER_BUTTON);

    // Entrada de Dados do teclado
    for (i = 0; i < 4; i++)
    {
        printf("Entre com o %do digito:", (i + 1));
        scanf("%d", &numero[i]);
    }

    printf("\nOrdem Crescente\n");
     // CRESCENTE
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (numero[i] > numero[j])
            {
                    aux = numero[i];
                    numero[i] = numero[j];
                    numero[j] = aux;
            }
            if(numero[i] == numero[j])
            {
                    numero[j] = -1;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
            if(numero[i] >= 0)
            {
               printf("%d %s", numero[i], ENTER_BUTTON);
            }
    }


    printf("\nOrdem Decrescente\n");
    // DECRESCENTE
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (numero[i] < numero[j])
            {
                aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        if(numero[i] >= 0)
        {
            printf("%d %s", numero[i], ENTER_BUTTON);
        }
    }

    return 0;
}
