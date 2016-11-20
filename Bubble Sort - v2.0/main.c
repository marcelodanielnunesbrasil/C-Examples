#include <stdio.h>
#include <conio.h>

int main()
{
    int numero_crescente[4];
    int numero_decrescente[4];
    int i = 0;
    int j = 0;
    int aux = 0;

    printf("Ordenacao de Numeros \n");
    printf("Entre com quatro numeros maiores ou iguais [0 ate 999]: \n");

    for (i = 0; i < 4; i++)
    {
        printf("Entre com o %do digito:", (i + 1));
        scanf("%d", &numero_crescente[i]);
        numero_decrescente[i] = numero_crescente[i];
    }

     // CRESCENTE
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (numero_crescente[i] > numero_crescente[j])
            {
                    aux = numero_crescente[i];
                    numero_crescente[i] = numero_crescente[j];
                    numero_crescente[j] = aux;
            }
            if(numero_crescente[i] == numero_crescente[j])
            {
                    numero_crescente[j] = -1;
            }
        }
    }

    // DECRESCENTE
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (numero_decrescente[i] < numero_decrescente[j])
            {
                aux = numero_decrescente[i];
                numero_decrescente[i] = numero_decrescente[j];
                numero_decrescente[j] = aux;
            }
            if(numero_decrescente[i] == numero_decrescente[j])
            {
                    numero_decrescente[j] = -1;
            }
        }
    }

    printf("\nOr. Cresc.    Or. Decresc.\n");

    for (i = 0; i < 4; i++)
    {
        if(numero_crescente[i] >= 0)
        {
            if(numero_crescente[i] < 9)
            {
                printf("     %d   ", numero_crescente[i]);
            }
             else if(numero_crescente[i] < 99)
            {
                printf("    %d   ", numero_crescente[i]);
            }
             else if(numero_crescente[i] < 999)
            {
                printf("   %d   ", numero_crescente[i]);
            }
             else
            {
                printf("  %d   ", numero_crescente[i]);
            }
        }
         else
        {
            printf("    %s   ", "--");
        }

        printf(" |");

        if(numero_decrescente[i] >= 0)
        {
            printf("     %d    \n", numero_decrescente[i]);
        }
         else
        {
            printf("     %s   ", "--");
        }
    }

    return 0;
}
