#include <stdlib.h>
#include <stdio.h>


int ft_fibonacci(int index)
{
  int nb1 =0;
  int nb2 = 1;
  int res  = 0;
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
  int index = 34;
  int res = 0;
  if(index >= 0 || index <= 2147483647)
    {
      res =(ft_fibonacci(index));
      printf("%d ", res);
      printf("\n");
      return res;
    }
  
  else
    {
      return 0; //return ERREUR
    }
  
}
