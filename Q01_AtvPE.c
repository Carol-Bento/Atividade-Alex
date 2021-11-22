#include <stdio.h>
// A imobiliária Imóbilis vende apenas terrenos retangular
//Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.
void main(){
   float largura, comprimento, area;
   printf("Digite a largura do terreno: ");
   scanf("%f",&largura);
   printf("Digite o comprimento do terreno: ");
   scanf("%f",&comprimento);
   
   area = largura * comprimento;
   
   printf("A área do terreno é %f \n", area);


}
