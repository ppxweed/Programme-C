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

char *ft_strcpy(char *dest, char *src)
{
  int i = 0;
  int len = lenght(src);
  char *test = dest;
  for(i = 0; i <= len ; i++)
    {
      test[i] = src[i]; 
    }
  return (test);
}

int main()
{
  char *test = "BONJOUR TOI";
  int len = lenght(test);
  char result[len];
  char *res;
  res = ft_strcpy(result,test);
  printf("%s", res);
  printf("\n");
  return 0;
}
