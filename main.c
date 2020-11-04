#include <stdio.h>
#include "calc.h"

int main(void) {
  float vetorUm[10], vetorDois[10], resultado;
  int contadorUm = 0, escolha = 2;
  char continuar, oper;
  

  do{

    if(escolha == 2){
      printf("\ninserir valor: ");
      scanf("%f", &vetorUm[contadorUm]);

      printf("\ninserir outro valor: ");
      scanf("%f", &vetorDois[contadorUm]);
    }else if(escolha == 1){
        printf("\ninserir valor: ");
        scanf("%f", &vetorUm[contadorUm]);
    }else{
      printf("\nmNumero invalido\n");
      break;
    }

    printf("\nSelecione a operacao: Soma(+) Sub(-) Mult(*)\n: ");
    scanf(" %c", &oper);
    
    switch(oper){
      case '+':
          if(escolha == 1){vetorDois[contadorUm] = 0;}
          resultado += soma(vetorUm[contadorUm], vetorDois[contadorUm]);
      break;
      case '-':
          if(escolha == 1){
            vetorDois[contadorUm] = 0;
            resultado -= sub(vetorDois[contadorUm], vetorUm[contadorUm]);
            }else{
            resultado -= sub(vetorUm[contadorUm], vetorDois[contadorUm]);
          }
          
      break;
      case '*':
          if(escolha == 1){vetorDois[contadorUm] = 1;}
          resultado *= mult(vetorUm[contadorUm], vetorDois[contadorUm]);
      break;
      default:
        printf("\nNao foi possivel identificar\n");
      break;
    }

    printf("\nDeseja inserir um novo valor? (s/n)\n: ");
    scanf(" %c", &continuar);
    
    if(continuar == 's'){
      escolha = 1;
    }

    
    contadorUm++;
  }while(continuar == 's' && contadorUm < 10);




  printf("\nResultado Final: %.2f\n", resultado);



  return 0;
}