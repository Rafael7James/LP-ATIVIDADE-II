#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int Jogo;

printf("1-Novo jogo\n2-Carregar Jogo\n3-Configura��es");
printf("\nEscolha a op��o: ");
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
printf("Configura��es");

default:
    break;
}

return 0;
}