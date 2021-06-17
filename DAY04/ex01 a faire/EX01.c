#include <stdlib.h>
#include <stdio.h>


int ft_recursive_factorial(int nb)
{
  if(nb == 0)
    {
      return 1;
    }
  else
    {
      return (nb*ft_recursive_factorial(nb-1));
    }
}

int main()
{
  int nb = 3;
  int res = 0;
  if(nb >= 0 || nb <= 2147483647)
    {
      res =(ft_recursive_factorial(nb));
      printf("%d ", res);
      printf("\n");
      return res;
    }
  
  else
    {
      return 0; //return ERREUR
    }
  
}
