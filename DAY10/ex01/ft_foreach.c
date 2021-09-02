
#include <stdio.h>

void ft_foreach(int *tab, int lenght, void(*f)(int))
{
  for(int i = 0; i <lenght ; i ++)
    {
      f(tab[i]);
    }
}

void  multi (int nb)
{
  nb*= 2;
  printf("%d ", nb);
}

int main()
{
  int len = 5;
  int i = 0;
  int tab[5] = {0,2,4,6,8};
  ft_foreach(tab,len,multi);
  return 0;
}
