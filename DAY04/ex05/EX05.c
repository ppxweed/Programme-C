#include <stdlib.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
  int res = 0;
  float tmp = 0; //ne trouve pas comment mettre la condition pour 0
  float sq = nb/2;

  int intpart = 0;
  float floatpart = 0; 

  if (nb < 0 ) {
    return 0;
  }
  if (nb == 1) {
    return 1;
  }

  while(sq != tmp)
    {
      tmp= sq;
      sq = ((nb/tmp)+tmp)/2;
    }

  intpart = (int)sq;
  floatpart = sq - intpart;
  if (floatpart == 0) {
    res = sq;
  } else {
    res = 0;
  }
return res;

}

   
int main()
{
  printf("Res: %i || Expected: %i \n", ft_sqrt(-9), 0);
  printf("Res: %i || Expected: %i \n", ft_sqrt(-1), 0);
  printf("Res: %i || Expected: %i \n", ft_sqrt(0), 0);
  printf("Res: %i || Expected: %i \n", ft_sqrt(1), 1);
  printf("Res: %i || Expected: %i \n", ft_sqrt(9), 3);
  printf("Res: %i || Expected: %i \n", ft_sqrt(11), 0);
  printf("Res: %i || Expected: %i \n", ft_sqrt(1000000), 1000);
  printf("Res: %i || Expected: %i \n", ft_sqrt(2147483647), 0);

  return 0;
}
