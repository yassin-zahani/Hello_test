#include <stdio.h>

int main (void)
{
  int somme, n_premiers_entiers, indice ;
  
  printf("calcule la somme des n premiers entiers , entrez n : ");
  scanf(&n_premiers_entiers);
  
  indice=0;
  somme= 0;
  while (indice <= n_premiers_entiers){
    somme+=indice;
    indice++;
  }
  printf("la somme est %d\n",somme);
  
  return 0;
}
