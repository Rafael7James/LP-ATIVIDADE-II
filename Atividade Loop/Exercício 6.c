#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int produto;

printf("Idiomas disponíveis\n1-Camiseta\n2-Calça\n3-Sapato");
printf("\nEscolha seu produto: ");
scanf("%d", &produto);

switch (produto)
{
case 1:
    printf("Camiseta");
    break;

case 2:
printf("Calça");
break;

case 3:
printf("Sapato");

default:
    break;
}

return 0;
}