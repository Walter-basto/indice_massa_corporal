#include <stdio.h>
int main()
{
    char nome;//caraterer//
    int  idade;// numero inteiro//
    float altura,peso, imc;// numero com virgula (ponto flutuante)//
  
     
     printf(" digite o seu nome:\n");//leia//
        scanf("%s", &nome);//escrever//
     printf("digite  a sua  idade:\n");//leia//
        scanf("%d", &idade);//escrever//
     printf("digite o seu peso:\n");///leia//
        scanf("%f", &peso);//escrever//
         printf("digite a sua altura:\n");//leia//
        scanf("%f", &altura);//escrever//
      printf("\n%s", &nome);  
    imc=peso/(altura*altura); 
       if(imc<18.5)
            {
            
            printf("\n o resultado do seu imc: %.2f", imc);
            printf("\nestado: BAIXO PESO.");
            }
            else if(imc>18.5 && imc<25)
            {
                 printf("\n o resultado do seu imc: %.2f", imc);
                 printf("\nestado:PESO IDEAL.");
                 
            }
             else if(imc>25 && imc<30)
            {
                    printf("\n o resultado do seu imc: %.2f", imc);
                    printf("\nestado:SOBREPESO.");
            }
             else if(imc>30 && imc<35)
            {
                    printf("\n o resultado do seu imc: %.2f", imc);
                    printf("\n estado: OBESIDADE GRAU 1.");
            }
             else if(imc>35 && imc<40)
            {
                    printf("\n o resultado do seu imc: %.2f", imc);
                    printf("\n  estado: OBESIDADE GRAU 2.");
            }
              else if(imc>40)
            {
                    printf("\n o resultado do seu imc: %.2f", imc);
                    printf("\n  estado: OBESIDADE GRAU 3.");
            }
   
}