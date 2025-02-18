#include <stdio.h>
int main()
{

    int valores[5];
    int soma = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("DIGITE UM VALOR INTEIRO: \n");
        scanf("%d", &valores[i]);
        soma = soma + valores[i];
    }
for ( i = 0; i < 5; i++)
{
    printf("VALORES [%d]\n", valores[i]);
}

    printf("SOMA = [%d]\n", soma);

    return 0;
}