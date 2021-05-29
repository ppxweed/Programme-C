#include <stdio.h>


void ft_is_negativ(int n)
{
  if(n >= 0)
    {
      printf("%d is P",n);
    }
  else
    {
      printf("%d is N", n);
    }
}

int main ()
{
  ft_is_negativ(-2);
  printf("\n");
  ft_is_negativ(6);
  printf("\n");
  return (0) ;
}
