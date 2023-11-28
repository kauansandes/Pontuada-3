#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero[5], i, impar = 0, par = 0, qntNegativos = 0, maior = 0, menor = 9999, somaPar = 0, somaNumeros = 0;
    float mediaPar = 0, mediaNumeros = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numero[i]);
        system("cls || clear");

        if (numero[i] % 2 == 0)
        {
            par++;
            somaPar += numero[i];
        }
        else
        {
            impar++;
        }

        if (numero[i] < 0)
        {
            qntNegativos++;
        }

        somaNumeros += numero[i];

        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;
    }

    mediaNumeros = somaNumeros / i;

    if (par > 0)
    {
        mediaPar = somaPar / par;
    }

    printf("Quantidade de numeros i­mpares: %d \n", impar);
    printf("Quantidade de numeros negativos: %d \n", qntNegativos);
    printf("Maior numero: %d \n", maior);
    printf("Menor numero: %d \n", maior);
    printf("Média numeros pares: %.1f \n", mediaPar);
    printf("Média numeros total: %.1f \n", mediaNumeros);

    return 0;
}
