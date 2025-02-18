#include <stdio.h> 
int main (){

int elementos[6];
int maior = -2000, menor = 2000;
int i;

for ( i = 0; i < 6; i++)
{
    printf("INSIRA OS ELEMENTOS: \n");
scanf("%d", &elementos[i]);

if (elementos[i] > maior)
{
maior = elementos[i];
}
if (elementos[i] < menor)
{
    menor = elementos[i];
}
}

printf("MAIOR = %d\n", maior);
printf("MENOR = %d\n", menor);

}