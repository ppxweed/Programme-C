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

int ft_str_is_lowercase(char *str)
{
  int i = 0;
  if(lenght(str) == 0)
    {
      return 1;
    }
  while(str[i] != '\0')
    {
      if(str[i]>='a'&& str[i]<= 'z')
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
  char *res = "sal32341za";
  printf("The actual result : %i \n", ft_str_is_lowercase(res) ); // 0

  char *res1 = " ";
  printf("The actual result : %i \n", ft_str_is_lowercase(res1) );// 0

  char *res2 = "21";
  printf("The actual result : %i \n", ft_str_is_lowercase(res2) );// 0

  char *res3 = "AZREAZE";
  printf("The actual result : %i \n", ft_str_is_lowercase(res3) );// 0

  char *res4 = "salza";
  printf("The actual result : %i \n", ft_str_is_lowercase(res4) );// 1
  return 0;
}
