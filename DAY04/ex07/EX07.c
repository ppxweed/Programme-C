#include <stdlib.h>
#include <stdio.h>
int ft_is_prime(int nb)
{
  int i = 0;
  int res = 1;
  if(nb == 0 || nb == 1 || nb < 0)
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
  int res = 0;
  int test = 0;
  test = nb+1;
  if (ft_is_prime(nb) == 1) {
    return nb;
  }
  while(ft_is_prime(test) != 1)
    {
      test+=1;
    }
  return test;
}



int main()
{
  int numbers[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
  int i = 0;
  int j = 0; 
  
  printf("Res: %i || Expected: %i \n", ft_find_next_prime(-1), 2);
  printf("Res: %i || Expected: %i \n", ft_find_next_prime(-123), 2);

  while (i <= 100) {
    printf("i: %i || Res: %i || Expected: ", i, ft_find_next_prime(i));

    if (i == numbers[j]) {
      printf("%i\n", numbers[j]);
      j++;
    } else {
      printf("%i\n", numbers[j]);
    }
    i++;
  }

  return 0;
  
}
