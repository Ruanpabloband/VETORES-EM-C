#include <stdio.h> 
int main (){

float numeros[8];
float media = 0;
float soma;
int i;

for ( i = 0; i < 8; i++)
{
    printf("DIGITE 8 NOTAS:\n");
scanf("%f", &numeros[i]);
soma = soma + numeros[i];
media = soma / 8;
}

    printf("MEDIA = [%f]\n", media);



    return 0;
}