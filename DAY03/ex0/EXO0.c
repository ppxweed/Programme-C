#include <stdio.h>


void ft_ft(int* nbr)
{
  int ecole;
  ecole =42;
  nbr = &ecole;
  printf("%i", *nbr);
  return;
}

int main ()
{
  int *test;
  int test1 = 2;
  test = &test1;
  ft_ft(test);
  printf("\n");
  return (0) ;
}
