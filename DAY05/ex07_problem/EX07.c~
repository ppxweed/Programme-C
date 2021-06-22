#include <stdio.h>
#include <stdlib.h>


int ft_strncmp(char *s1, char *s2, int n)
{
  int i = 0;
  int tmp1;
  int tmp2;
  while(i <n)
    {
      tmp1 = s1[i]+'0';
      tmp2 = s2[i]+'0';
      if(tmp1 > tmp2)
	{
	  return (tmp1-tmp2);
	}
      else if (tmp2 > tmp1)
	{
	  return (tmp1-tmp2);
	}
      else
	{
	  i+=1;
	}
    }
  if(i == n)
    {
      return 0;
    }
}

int main()
{
  char *test = "BONJOUR TOI";
  char *test2 = "900A";
  int n = 4;
  int res ;
  res = ft_strncmp(test,test2,n);
  printf("%i", res);
  printf("\n");
  return 0;
}
