#include <stdio.h>
#include <stdlib.h>

int lenght(char *str)
{
  int res = 0;
  int i = 0;
  while(str[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}

char *ft_strstr(char *str, char *to_find)
{
  int i = 0;
  int j =0;
  int len_str = lenght(str);
  int len2 = lenght(to_find);
  char result[len2];
  char *res;
  while(i< len_str)
    {
      if(str[i] != to_find[j])
	{
	  i+=1;
	}
      else
	{
	  result[j] = str[i];
	  printf("%s\n", result);
	  i+=1;
	  j+=1;
	}
    }
  res = result;
  if(i == len_str && res != to_find)
    {
      return "NULL";
    }
  else
    {
      return res;
    }
  
}

int main()
{
  char *test = "BONJOUR TOI";
  char *test2 = "JOUR";
  char *res = "";
  res = ft_strstr(test,test2);
  printf("%s", res);
  printf("\n");
  return 0;
}
