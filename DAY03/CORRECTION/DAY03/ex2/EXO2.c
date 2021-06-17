#include <stdio.h>


void ft_div_mod(int a, int b , int *div, int *mod)
{
  int res;
  int res_mod;
  res = a/b;
  res_mod = a%b;
  *div = res;
  *mod = res_mod;
  return;
}

int main ()
{
  int nb1 = 13424325;
  int nb2 = 563434;

  int div = 0;
  int mod = 0;
  ft_div_mod(nb1,nb2,&div,&mod);
  printf("Le resulat de la division est : %i et le reste est de %i", div, mod) ;
  printf("\n");
  return (0) ;
}
