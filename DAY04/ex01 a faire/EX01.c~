#include <stdlib.h>
#include <stdio.h>


int ft_iterative_factorial(int nb)
{
  int res = 1;
  if(nb <=2)
    {
      res = nb;
    }
  else
    {
    while (nb > 0 )
      {
	res*= nb;
	nb-=1;
      }
    }
  return (res);
  
}

int main()
{
  int nb = 10;
  int res = 0;
  if(nb >= 0 || nb <= 2147483647)
    {
      res =(ft_iterative_factorial(nb));
      printf("%d ", res);
      printf("\n");
      return res;
    }
  
  else
    {
      return 0; //return ERREUR
    }
  
}
