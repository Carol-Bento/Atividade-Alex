#include <stdio.h>
//2. Faça um programa que calcule e mostre a área de um trapézio. 
//Sabe-se que: A = (base maior + base menor) * altura)/2
void main(){
   float b_maior, b_menor, altura, area;
   printf("Digite o tamanho da base maior ");
   scanf("%f",&b_maior);
   printf("Digite o tamanho da base menor: ");
   scanf("%f",&b_menor);
   printf("Digite a altura do trapézio: ");
   scanf("%f",&altura);
   
   area = (((b_maior + b_menor) * altura)/2);
   
   printf("A área do trapézio é %f \n", area);


}
