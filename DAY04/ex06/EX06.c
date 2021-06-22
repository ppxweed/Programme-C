#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>


int ft_is_prime(int nb)
{
  int i = 0;
  int res = 1;

  if(nb == 0 || nb ==1 || nb < 0)
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
  int numbers[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  int i = 0;
  int j = 0; 
  
  printf("Res: %i || Expected: %i \n", ft_is_prime(-1), 0);
  printf("Res: %i || Expected: %i \n", ft_is_prime(-123), 0);

  while (i <= 100) {
    printf("i: %i || Res: %i || Expected: ", i, ft_is_prime(i));

    if (i == numbers[j]) {
      printf("1\n");
      j++;
    } else {
      printf("0\n");
    }
    i++;
  }

  return 0;
}
