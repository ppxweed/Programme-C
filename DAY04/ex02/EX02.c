#include <stdlib.h>
#include <stdio.h>
#include <EX02.h>


int ft_iterative_power(int nb, int power)
{
  int res = 1;
  if(power <0)
    {
      res = 0;
    }
  else
    {
    while (power >= 1 )
      {
	res*= nb;
	power-=1;
      }
    }
  return (res);
  
}

int main()
{
  int nb = 5;
  int power = 2;
  int res = 0;
  if(nb >= 0 || nb <= 2147483647)
    {
      res =(ft_iterative_power(nb, power));
      printf("%d ", res);
      printf("\n");
      return res;
    }
  
  else
    {
      return 0; //return ERREUR
    }
  
}
