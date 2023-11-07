#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

int clima;

printf("Digite a temperatura: ");
scanf("%d", &clima);

if (clima >= 25)
{
    printf("Clima ensolarado");
}
else if (clima < 15)
{
printf("Clima chuvoso");
}
else
{
printf("Clima nublado") ;   
}

return 0;
}

