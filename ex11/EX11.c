#include <stdio.h>
#include <stdlib.h>


int lenght(char *test)
{
  int res =0;
  int i = 0;
  while(test[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}

int ft_str_is_uppercase(char *str)
{
  int i = 0;
  if(lenght(str) == 0)
    {
      return 1;
    }
  while(str[i] != '\0')
    {
      if(str[i]>='A'&& str[i]<= 'Z')
	{
	  i+=1;
	}
      else
	{
	  return 0;
	}
    }
  return 1;
}

int main()
{
  char *res = "";
  printf("The actual result : %i \n", ft_str_is_uppercase(res)); // 1

  char *res1 = "azeze123";
  printf("The actual result : %i \n", ft_str_is_uppercase(res1));// 0 

  char *res2 = "124";
  printf("The actual result : %i \n", ft_str_is_uppercase(res2));// 0


  char *res3 = "AZRZD";
  printf("The actual result : %i \n", ft_str_is_uppercase(res3));// 1
  return 0;
}
