#include <stdio.h>
 /*Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha. */
int main(void) {
 int h1;
 int h2;
 int m1;
 int m2;
 int soma=0;
 int produto=0;
 printf("\nInsira a idade do homem1");
 scanf("%i", &h1);
 printf("\ninsira a idade do homem2");
 scanf("%i", &h2);
 printf("\nInsira a idade da mulher1");
 scanf("%i", &m1);
 printf("\nInsira a idade da mulher2");
scanf("%i",&m2);
if (h1 > h2 && m1 > m2){
  soma=h1 + m2;produto=h2 * m1; 
  printf("\nA soma das idades do homem mais velho e da mulher mais nova e igual a %i",soma);
  printf("\nO produro das idades  do homem mais novo com a mulher mais velha e igual a %i",produto);
}
else if (h1 > h2 && m2 > m1){
    soma = h1 + m1; produto = h2 * m2;
    printf("\nA soma das idades do homem mais velho com a mulher mais nova é igual a %i\n",soma);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é igual a %i\n",produto);
  }
  
  else if (h2 > h1 && m1 > m2){
    soma = h2 + m2; produto = h1 * m1;
    printf("\nA soma das idades do homem mais velho com a mulher mais nova é igual a %i\n",soma);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é igual a %i\n",produto);
  }
  
  else if (h2 > h1 && m2 > m1){
    soma = h2 + m1; produto = h1 * m2;
    printf("\nA soma das idades do homem mais velho com a mulher mais nova é igual a %i\n",soma);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é igual a %i\n",produto);
  }

  else{
    printf("\nIdades invalídas");
  }

  return 0;
}