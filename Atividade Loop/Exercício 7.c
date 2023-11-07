#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int Jogo;

printf("1-Novo jogo\n2-Carregar Jogo\n3-Configurações");
printf("\nEscolha a opção: ");
scanf("%d", &Jogo);

switch (Jogo)
{
case 1:
    printf("Novo Jogo");
    break;

case 2:
printf("Carregar Jogo");
break;

case 3:
printf("Configurações");

default:
    break;
}

return 0;
}