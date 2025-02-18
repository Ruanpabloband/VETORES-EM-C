#include <stdio.h>
int main (){

int valores[10];
int i;
int soma = 0;
int somaIMPAR = 0;

printf("DIGITE 10 VALORES INTEIROS: \n");
for ( i = 0; i < 10; i++)
{
    scanf("%d", &valores[i]);

if (valores[i] % 2 == 0)
{
    soma = soma + valores[i];
}
else{
somaIMPAR = somaIMPAR + valores[i];
}
}

printf("SOMA PARES = %d\n", soma);
printf("SOMA IMPARES = %d\n", somaIMPAR);

    return 0;
}