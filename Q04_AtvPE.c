#include <stdio.h>
/*4. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. 
Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
Assuma que a balança já desconte o peso do prato.*/
void main(){
   float kg_prato, valor;
   printf("Digite o peso do prato montado em kg: ");
   scanf("%f",&kg_prato);
   
   valor = (kg_prato * 12);
   
   printf("O valor a ser pago para %f quilos é %f reais \n", kg_prato, valor);


}
