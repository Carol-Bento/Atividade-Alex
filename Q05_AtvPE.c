#include <stdio.h>
/*A padaria Hotpão vende certa quantidade de pães franceses e uma quantidade de broas a cada dia. 
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou 
com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). 
Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as 
quantidades de pães e de broas, e depois calcular os dados solicitados.*/
void main(){
   int pao_vendido, broa_vendida;
   float valor_arrecadado, valor_poup;
   printf("Quantidade de pães vendidos: ");
   scanf("%d",&pao_vendido);
   printf("Quantidade de broas vendidas: ");
   scanf("%d",&broa_vendida);
   
   valor_arrecadado = ((pao_vendido * 0.12) + (broa_vendida * 1.5));
   valor_poup = valor_arrecadado * 0.1;
   
   printf("O valor arrecadado com a venda de pães e broas foi %f reais, deve guardar %f reais na poupança \n", valor_arrecadado, valor_poup);


}
