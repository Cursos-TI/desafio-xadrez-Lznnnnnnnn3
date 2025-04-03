#include <stdio.h>

//Sistema de movimento das peças
///Movimento da torre
void Movertorre(int casas){
    if (casas > 0)
    {
    printf("Direita\n");
    Movertorre(casas - 1);
    }

}

//Movimento da rainha
void MoverRainha(int casas){
    if (casas > 0)
    {
    printf("Esquerda\n");
    MoverRainha(casas - 1);
    }

}

//Movimento do bispo
void Moverbispo(int casas){
    if (casas > 0)
    {
    printf("Subindo na Diagonal da direita\n");
    Moverbispo(casas - 1);
    }

}

int main(){

//Variaveis de escolha
int escolhadaPeca;
int i;


//variaveis com nome
int torre;
int rainha;
int bispo;
int cavalo;
int movimentocompleto = 1;

//Escolha da peça
printf("Escolha qual peça quer andar: \n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
printf("4. Cavalo\n");
scanf("%d", &escolhadaPeca);


switch (escolhadaPeca)
{
case 1:
    printf("Você Moveu a Torre\n");
    Movertorre(5);
    
    break;
    case 2:
    printf("Você Moveu o bispo\n");
    Moverbispo(5);
    
    break;
    case 3:
    printf("Você Moveu a Rainha\n");
    MoverRainha(8);
    
    break;
    case 4:
    while (movimentocompleto--)
    {
        for (i = 1; i <= 2; i++)
        {
            printf("Cima\n");
        }

    printf("Direita\n");
    }
    

    break;

default:
    printf("Opção invalida");
    break;
}




return 0;

}