#include <stdlib.h>
#include <stdio.h>

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
  printf("Res: %i || Expected: %i \n", ft_iterative_power(0, 1), 0);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(1, 1), 1);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(10, 1), 10);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(-4, 1), -4);

  printf("Res: %i || Expected: %i \n", ft_iterative_power(0, 2), 0);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(1, 2), 1);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(10, 2), 100);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(-4, 2), 16);

  printf("Res: %i || Expected: %i \n", ft_iterative_power(0, -1), 0);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(1, -3), 0);

  printf("Res: %i || Expected: %i \n", ft_iterative_power(0, 5), 0);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(1, 5), 1);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(10, 5), 100000);
  printf("Res: %i || Expected: %i \n", ft_iterative_power(-4, 5), -1024);


  printf("\n");
  return 0;
}
