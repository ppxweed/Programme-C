#include <stdlib.h>
#include <stdio.h>


int ft_recursive_factorial(int nb)
{
  if (nb == 1 && nb == 0 ) {
    return 1;
  }
  if (nb < 0 || nb > 12) {
    return 0;
  }
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
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(0), 1); 
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(1), 1); 
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(2), 2); 
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(3), 6); 
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(10), 3628800);
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(12), 479001600); 
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(13), 0); 
  printf("Res: %d || Expected: %i \n", ft_recursive_factorial(-5), 0); 
  printf("\n");
  return 0;
}
