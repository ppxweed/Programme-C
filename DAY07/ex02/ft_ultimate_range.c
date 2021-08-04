#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int ft_ultimate_range(int** range, int min, int max) //min inclus et max exclus
{
  int i = 0;
  int j = 0;
  int *res= NULL;
  if(min >= max)
    {
      *range = NULL;
      return **range;
    }
  int l = max-min;
  res = (int*)malloc(l*sizeof(*res));
  while(min < max)
    {
      res[i] = min;
      min+=1;
      i+=1;
      range+=1;
    }
  res[i] = '\0';
  while(j < i)
    {
      printf("%d \n",res[j]);
      j+=1;
    }
  //*range = res;
  free(res);

  return i;
}


int main()
{
  int **range  = 0;
  int min = 11;
  int max = 11;
  int res = ft_ultimate_range(range,min,max);    //JE COMPRENDS PAS LA LOGIQUE AVEC LE RANGE 

  printf("The actual result : %d \n",res);




  //JE N'ARRIVE PAS AFFICHER LE TOUT


  //PS : METTRE 10 au max est très drole



  
  return 0;
}
