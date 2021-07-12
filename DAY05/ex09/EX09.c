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

int ft_str_is_numeric(char *str)
{
  int i = 0;
  if(lenght(str) < 1)
    {
      return 1;
    }
  while(str[i] != '\0')
    {
      if((str[i]>='0'&&str[i] <= '9'))
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
  char *res = "123143243R";
  printf("The actual result is : %i \n",ft_str_is_numeric(res)); //0


    char *res1 = "AZRdezz";
    printf("The actual result is : %i \n",ft_str_is_numeric(res1));//0



    char *res2 = " ";
    printf("The actual result is : %i \n",ft_str_is_numeric(res2));//0



    char *res3 = "12215";
    printf("The actual result is : %i \n",ft_str_is_numeric(res3));//1
  return 0;
}
