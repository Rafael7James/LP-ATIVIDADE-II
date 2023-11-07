#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");


    int num, i, flag = 0;
  
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
  
    switch (num) {
        case 0:
        case 1:
            flag = 1;   
            printf("Nao é primo");
            break;
        case 2:
            flag = 0;   
            printf("é primo");
            break;
        default:
            for (i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    flag = 1;  
                    printf("Nao é primo"); 
                    break;
                }
            }
    }
return 0; 
}