#include <stdio.h>
#include <stdlib.h>


char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  if( n <=0)
    {
      return "";
    }
  int i = 0;
  char *test = dest;
  for(i = 0; i <= n ; i++)
    {
      test[i] = src[i]; 
    }
  return (test);
}

int main()
{
  int n = 2;
  char *test = "BONJOUR TOI         nT";
  char result[n];
  char *res;
  res = ft_strncpy(result,test,n);
  printf("%s", res);
  printf("\n");
  return 0;
}
