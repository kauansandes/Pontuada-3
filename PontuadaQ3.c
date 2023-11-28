#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[999][200], numeroTelefone[999][200];
    int n, i, salvo = 0;

    do
    {
        printf("1 - Salvar novo numero. \n");
        printf("2 - Exibir os numeros salvos. \n");
        printf("\nDigite: ");
        scanf("%d", &n);
        printf("\n");

        fflush(stdin);

        switch (n)
        {

        case 1:

            printf("Digite o nome do contato: ");
            gets(nome[salvo]);

            printf("Digite o numero do whatsapp: ");
            gets(numeroTelefone[salvo]);

            salvo++;
            break;

        case 2:

            for (i = 0; i < salvo; i++)
            {

                printf("Nome do contato: %s \n", nome[i]);
                printf("Numero do whatsapp: %s \n", numeroTelefone[i]);
                printf("\n");
            }

            break;

        default:
            printf("Opção invalida. \n");
            break;
        }

    } while (n != 2);

    return 0;
}
