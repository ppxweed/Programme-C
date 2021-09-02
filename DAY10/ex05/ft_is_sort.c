
#include <stdio.h>

int ft_is_sort(int *tab, int lenght, int(*f)(int, int))
{
  printf("gogo");
  int i = 0;
  int tmp = 0;
  while(i <= lenght-1)
    {
      if(f(tab[i],tab[i+1]) < 0)
	{
	  return 0;
	}
      else
	{
	  i++;
	}
    }
  return 1;

}

int compare(int nb1, int nb2)
{
  printf("salut");
  if(nb1 > nb2)
    {
      return 1;
    }
  return 0;
}

int main ()
{
  printf("hello");
  int len = 5;
  int *tab = {0,1,2,3,4};
  int res = ft_is_sort(tab, len, compare);
  return res;
}
