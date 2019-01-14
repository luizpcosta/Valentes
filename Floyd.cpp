#include <iostream>
#include <stdio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* imprime o triangulo de Floyd ate uma certa linha . */


int main(void) {
int nlin;                 /* numero de linhas no triangulo */
int m,k,i,j;              /* contadores e auxiliares */

  printf("Entre com o numero de linhas (inteiro positivo): ");
  scanf("%d",&nlin);
  while (nlin<=0) {
    printf("Voce entrou com %1d, mas eu nao sei lidar com" 
           " numero negativo ou zero.\n",nlin);
    printf("Tente de novo: ");
    scanf("%d",&nlin);
  }

  m=nlin*(nlin+1)/2; /* calc numero de elementos na matriz */

  for (k=0; m; k++) m /= 10; /* pega numero de digitos em m*/

  m=1;
  for (i=1; i<=nlin; i++) {
    for (j=0; j<i; j++) printf("%*d ",k,j+m);
    printf("\n");
    m +=i;
  }
  
  system("PAUSE");	
  return 0;
}

