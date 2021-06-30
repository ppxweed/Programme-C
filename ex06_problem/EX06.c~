#include <stdio.h>
#include <stdlib.h>

int lenght(char *str)
{
  int res = 0;
  int i= 0;
  while(str[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}


char *ft_strupcase(char *str)
{
  int i = 0;
  int tmp;
  char test[lenght(str)];
  while(str[i] != '\0')
    {
      if(str[i]== ' ')
	{
	  test[i]= ' ';
	  i+=1;
	}
      else
	{
	  tmp = str[i];
	  tmp-=32;
	  if(tmp>= 65 && tmp <= 90)
	    {
	      test[i] = tmp;
	    }
	  i+=1;
	}
      
    }
  str = test;
  return str;
}

int main()
{
  char *test = "bonjour toi";
  char *res;
  res = ft_strupcase(test);
  printf("%s", res);
  printf("\n");
  return 0;
}
