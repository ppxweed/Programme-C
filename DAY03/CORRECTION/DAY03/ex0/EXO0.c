#include <stdio.h>


void ft_ft(int* nbr)
{
  *nbr = 42;
  return;
}

int main ()
{
  int *nbr;
  ft_ft(nbr);
  printf("%i\n", *nbr);
  return (0) ;
}
