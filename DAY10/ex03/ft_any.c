
#include <stdio.h>

int ft_any(char **tab , int(*f)(char*))
{
  int i = 0;
  printf("hello");
  while(tab[i][0] != '0')
    {
     
      if(f(tab[i]) == 1)
	{
	  return 1;
	}
      i++;
    }
  return 0;
}

int space (char* nb)
{
  printf("salut");
  if(nb == " ")
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int main()
{

  char *tab = "salut toi";
  int res ;
  printf("heloo");
  res = ft_any(&tab,space);
  return res;
  
}
