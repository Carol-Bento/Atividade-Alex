#include <stdio.h>
//Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar 
//todos os cavalos comprados para um haras.
void main(){
   int qtde_cavalos, qtde_ferraduras;
   printf("Digite a quantidade de cavalos comprados: ");
   scanf("%d",&qtde_cavalos);
   
   qtde_ferraduras = (qtde_cavalos * 4);
   
   printf("A quantidade de ferraduras para %d cavalos é %d ferraduras \n", qtde_cavalos, qtde_ferraduras);


}
