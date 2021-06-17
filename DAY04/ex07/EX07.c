#include <stdlib.h>
#include <stdio.h>
int ft_is_prime(int nb)
{
  int i = 0;
  int res = 1;
  if(nb == 0 || nb == 1)
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
 

int ft_find_next_prime(int nb)
{
  int res =0;
  int test =0;
  test = nb+1;
  while(ft_is_prime(test) != 1)
    {
      test+=1;
    }
  return test;
}



int main()
{
  int index = 2;
  int res = 0;
  if(index >= 0 || index <= 2147483647)
    {
      res =(ft_find_next_prime(index));
      printf("%d ", res);
      printf("\n");
      return res;
    }
  
  else
    {
      return 0; //return ERREUR
    }
  
}
