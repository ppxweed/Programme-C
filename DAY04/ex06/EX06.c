#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>


int ft_is_prime(int nb)
{
  int i = 0;
  int res = 1;
  if(nb == 0 || nb ==1)
    {
      return 0;
    }
  for(i=nb-1;i!=1;i--) {
    if(nb%i==0)
      {
	res = 0;
	break;
      }
  }
  return res;
}


int main()
{
  int index = 7;
  int res = 0;
  if(index >= 0 || index <= 2147483647)
    {
      res =(ft_is_prime(index));
      printf("%d ", res);
      printf("\n");
      return res;
    }
  
  else
    {
      return 0; //return ERREUR
    }
  
}
