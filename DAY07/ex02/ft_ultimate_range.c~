#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int *ft_range(int min, int max) //min inclus et max exclus
{
  int i = 0;
  int j = 0;
  int *res= NULL;
  if(min >= max)
    {
      return 0;
    }
  int l = max-min;
  res = (int*)malloc(l*sizeof(*res));
  while(min < max)
    {
      res[i] = min;
      min+=1;
      i+=1;
    }
  res[i] = '\0';
    while(j < i)
    {
      printf("%d \n",res[j]);
      j+=1;
    }
  free(res);

  return res;
}


int main()
{
  int min = 0;
  int max = 11;
  int *res = ft_range(min,max);

  printf("The actual result : %ls \n",res);

  int min1 = 3;
  int max1 = 3;
  int *res1 = ft_range(min1,max1);

  printf("The actual result : %ls \n",res1);

  int min2 = 6;
  int max2 = 45;
  int *res2 = ft_range(min2,max2);

  printf("The actual result : %ls \n",res2);



  //JE N'ARRIVE PAS 0 AFFICHER LE TOUT


  //PS : METTRE 10 au max est très drole



  
  return 0;
}
