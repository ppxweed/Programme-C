#include <stdlib.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
  int res = 0;
  int tmp = 0; //ne trouve pas comment mettre la condition pour 0
  int sq = nb/2;
  while(sq != tmp)
    {
      tmp= sq;
      sq = ((nb/tmp)+tmp)/2;
    }
   res = sq;
return res;

}

   
int main()
{
  int index = 9;
  int res = 0;
  if(index >= 0 || index <= 2147483647)
    {
      res =(ft_sqrt(index));
      printf("%d ", res);
      printf("\n");
      return res;
    }
  
  else
    {
      return 0; //return ERREUR
    }
  
}
