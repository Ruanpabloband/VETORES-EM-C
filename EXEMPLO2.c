#include <stdio.h> 
int main (){

int valores[10];
int i;

for ( i = 0; i < 10; i++)
{
    printf("INFORME O VALOR: \n");
scanf("%d", &valores[i]);
}

for ( i = 0; i < 10; i++)
{
    printf("VALORES [%d]", valores[i]);
}


    return 0;
}