#include <stdio.h>


void ft_ultimate_div_mod(int *a, int *b)
{
  int tmp;
  int tmp_mod;
  tmp = (*a)/(*b);
  tmp_mod = (*a)%(*b);
  a = &tmp;
  b = &tmp_mod;
  printf("Le résultat de la division est %i et le reste est de %i", *a, *b);
  return;
}

int main ()
{
  int *nb1;
  int *nb2;
  int a;
  int b;
  a =234;
  b =23;
  nb1 = &a;
  nb2 = &b;
  ft_ultimate_div_mod(nb1, nb2);
  printf("\n");
  return (0) ;
}
