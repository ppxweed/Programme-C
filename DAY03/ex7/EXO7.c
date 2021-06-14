#include <stdio.h>

int Length(char *str)
{
  int i = 0;
  int res  = 0;
  while(str[i] != '\0')
    {
      res +=1;
      i+=1;
    }
  res+=1;
  printf("%i", res);
  return (res);
}


char *ft_strrev(char *str)
{
  int j = 0;
  int i;
  int len = Length(str);
  for (i = len-1; i>=0; i--)
    {
      for(j = 0; j<=len-1; j++)
	{
	   str[j] = str[i];
	}      
    }
  return (str);
}


int main ()
{
  char *schar = "HELLO";
  ft_strrev(schar);
  printf("\n");
  return (0) ;
}
