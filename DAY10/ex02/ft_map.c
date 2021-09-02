#include <stdio.h>
#include <stdlib.h>

int *ft_map(int *tab, int lenght , int(*f)(int))
{
  int *map = NULL;
  map = (int *) malloc(sizeof(int)*lenght);
  for(int  i = 0; i < lenght ; i++)
    {
      map[i] = f(tab[i]);
    }
  map[lenght] = '\0';
  return map;
}

int  multi (int nb)
{
  nb*= 2;
  return nb;
}

int main()
{
  int len = 5;
  int i = 0;
  int tab[5] = {0,2,4,6,8};
  int *res ;
  res = ft_map(tab,len,multi);
  while(i<len)
    {
      printf("%d ",res[i]);
      i++;
    }
  return 0;
}
