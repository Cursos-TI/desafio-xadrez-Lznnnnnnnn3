#include <stdio.h>

int main(){

//Variaveis de escolha
int escolhadaPeca;
int i = 1;


//variaveis com nome
int torre;
int rainha;
int bispo;

// Escolha da peça do usuario
printf("Escolha qual peça quer andar: \n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
scanf("%d", &escolhadaPeca);


switch (escolhadaPeca)
{
    //Peça Torre
case 1:
    printf("Você Moveu a Torre\n");
   while (i <= 5)
   {
    printf("Direita\n");
    i++;
   }
   
    break;

    //Peça Bispo
    case 2:
    printf("Você Moveu o bispo\n");
    do
    {
        printf("Subindo na Diagonal da direita\n");
        i++;
    } while (i <= 5);
    break;

    //Peça Rainha
    case 3:
    printf("Você Moveu a Rainha\n");
    for (i = 1; i <= 8; i++)
    {
        printf("Esquerda\n");
    }
    
    break;

default:
    printf("Opção invalida");
    break;
}






}