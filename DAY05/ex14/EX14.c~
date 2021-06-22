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
char *ft_strcat(char *dest, char *src)
{
  char final[lenght(dest)+lenght(src)];
  int i = 0;
  int j = 0;
  if(lenght(src) == 0)
    {
      return dest;
    }
  else if (lenght(dest) == 0)
    {
      return src;
    }
  for(i = 0 ; i < lenght(dest); i++)
    {
      final[i] = dest[i];
    }
  for(i = lenght(dest); i < lenght(src)+lenght(dest); i++)
    {
      final[i] = src[j];
      j+=1;
    }
  dest = final;
  return dest;
}

int main()
{
  char *res = "fezrez";
  char *test = "ertt"; //MARCHE ET DES FOIS MARCHENT PAS QUESTION A POSER
  char result[lenght(res) + lenght(test)];
  char *rest;
  rest = result;
  rest = ft_strcat(res,test);
  printf("%s", rest);
  printf("\n");
  return 0;
}
