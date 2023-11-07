#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int idioma;

printf("Idiomas disponíveis\n1-Inglês\n2-Espanhol\n3-Francês");
printf("\nEscolha o idioma: ");
scanf("%d", &idioma);

switch (idioma)
{
case 1:
    printf("Welcome!");
    break;

case 2:
printf("Bienvenido!");
break;

case 3:
printf("Accueillir!");

default:
    break;
}

return 0;
}