#include <stdlib.h>
#include <stdio.h>


int ft_fibonacci(int index)
{
  int nb1 =0;
  int nb2 = 1;
  int res  = 0;

  if (index < 0) {
    return -1;
  } 
  if (index < 2)
    {
      return (index); 
    }
  else
    {
      while (index >= 2)
	{
	  res +=(nb1 + nb2);
	  nb1 = nb2;
	  nb2 = res;
	  if(index == 2)
	    {
	      return res;
	    }
	  else
	    {
	      res = 0;     
	    }

	  index-=1;
	}
      return res;
    }
  
}

int main()
{
  printf("Res: %i || Expected: %i \n", ft_fibonacci(-1), -1);
  printf("Res: %i || Expected: %i \n", ft_fibonacci(-356), -1);
  int i;

  i = 0;

  while (i <= 20) {
    printf("Index: %i|| Res: %i \n", i, ft_fibonacci(i));

    i++;
  }
  return 0;
}
