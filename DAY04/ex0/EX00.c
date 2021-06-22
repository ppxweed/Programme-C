#include <stdlib.h>
#include <stdio.h>


int ft_iterative_factorial(int nb)
{
  int res = 1;
  if (nb == 1 && nb == 0 ) {
    return 1;
  }
  if (nb < 0 || nb > 12) {
    return 0;
  }
  while (nb > 1) {
	  res*= nb;
	  nb-=1;
  }
  return (res);
}

int main()
{
  int nb = 10; //3628800
  int res = 0;
  res =(ft_iterative_factorial(nb));
  printf("Res: %d || Expected: %i \n", res, 3628800);
  printf("Res: %d || Expected: %i \n", ft_iterative_factorial(0), 1); 
  printf("Res: %d || Expected: %i \n", ft_iterative_factorial(1), 1); 
  printf("Res: %d || Expected: %i \n", ft_iterative_factorial(2), 2); 
  printf("Res: %d || Expected: %i \n", ft_iterative_factorial(3), 6); 
  printf("Res: %d || Expected: %i \n", ft_iterative_factorial(12), 479001600); 
  printf("Res: %d || Expected: %i \n", ft_iterative_factorial(13), 0); 
  printf("Res: %d || Expected: %i \n", ft_iterative_factorial(-5), 0); 
  printf("\n");
  return res;
}
