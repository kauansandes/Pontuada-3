#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    char nome[5][200];
    int idade[5];
    float notas[5][3];
    float media[5];
    int somaNotas = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d� aluno: ", i + 1);
        gets(nome[i]);
        printf("Digite a idade do %d� aluno: ", i + 1);
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %d� nota do aluno: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / j;
        somaNotas = 0;

        fflush(stdin);
        system ("cls||clear");
    }

    for (i = 0; i < 5; i++)
    {
        printf("Nome do %d° aluno: %s \n", i + 1, nome[i]);
        printf("Idade do %d° aluno: %d \n", i + 1, idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Notas do aluno: %.2f \n", notas[i][j]);
        }

        printf("M�dia do aluno: %.2f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("Aprovado! \n");
        }

        if (media[i] > 5 && media [i] < 7)
        {
            printf("Recupera��o. \n");
        }
        if (media [i] < 5)
        {
    
            printf("Reprovado. \n");
        }
    }

    return 0;
}