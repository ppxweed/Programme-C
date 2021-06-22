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

int ft_str_is_printable(char *str)
{
  int i = 0;
  if(lenght(str) == 0)
    {
      return 1;
    }
  while(str[i] != '\0')
    {
      if(str[i]>=32 && str[i]<=126) //MON ASCII AFFICAHBLE VA DE 32 = 'SPACE' JUSQU A 126 = ~  !!
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
  char *res = "dzap^:)";
  int result;
  result = ft_str_is_printable(res);
  printf("%d", result);
  printf("\n");
  return 0;
}
