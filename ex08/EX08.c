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

int ft_str_is_alpha(char *str)
{
  int i = 0;
  if(lenght(str) < 1)
    {
      return 1;
    }
  while(str[i] != '\0')
    {
      if((str[i]>='A'&&str[i] <= 'Z')||(str[i]>= 'a'&& str[i]<= 'z' ))
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
  char *res = "))";
  printf("The actual result is : %i \n", ft_str_is_alpha(res)); // 0


  char *res1 = "aefRR";
  printf("The actual result is : %i \n", ft_str_is_alpha(res1));// 1
  

  char *res2 = " ";
  printf("The actual result is : %i \n", ft_str_is_alpha(res2));// 0

   char *res4 = "42363265";
   printf("The actual result is : %i \n", ft_str_is_alpha(res4));// 0
  return 0;
}
