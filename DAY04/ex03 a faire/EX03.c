#include <stdlib.h>
#include <stdio.h>


int ft_recursive_power(int nb, int power)
{
  if(power < 0)
  {
    return 0;
  }
  if(power == 0)
    {
      return 1;
    }
  else
    {
      return(nb*ft_recursive_power(nb,power-1));
    }
}

int main()
{
  printf("Res: %i || Expected: %i \n", ft_recursive_power(0, 1), 0);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(1, 1), 1);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(10, 1), 10);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(-4, 1), -4);

  printf("Res: %i || Expected: %i \n", ft_recursive_power(0, 2), 0);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(1, 2), 1);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(10, 2), 100);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(-4, 2), 16);

  printf("Res: %i || Expected: %i \n", ft_recursive_power(0, -1), 0);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(1, -3), 0);

  printf("Res: %i || Expected: %i \n", ft_recursive_power(0, 5), 0);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(1, 5), 1);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(10, 5), 100000);
  printf("Res: %i || Expected: %i \n", ft_recursive_power(-4, 5), -1024);


  printf("\n");
  return 0;
}
