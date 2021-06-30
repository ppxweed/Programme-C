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
char *ft_strncat(char *dest, char *src, int nb)
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
  for(i = lenght(dest); i < nb + lenght(dest); i++)
    {
      final[i] = src[j];
      j+=1;
    }
  dest = final;
  dest[i] = '\0';
  return dest;
}

int main()
{
  int n = 2;
  char *res = "fezrez";
  char *test = "ertt"; 
  char result[lenght(res) + lenght(test)];
  char *rest;
  rest = result;
  rest = ft_strncat(res,test,n);
  
  printf("The actual result : %s \n", rest); //fezrezer

  int g = 0;
  char *res1 = "zaeaze";
  char *test1 = ""; 
  char result1[lenght(res1) + lenght(test1)];
  char *rest1;
  rest1 = result1;
  rest1 = ft_strncat(res1,test1,g);

  printf("The actual result : %s \n", rest1); // zaeaze

  int k = -1;
  char *res2 = "fezrez";
  char *test2 = "aeaz"; 
  char result2[lenght(res2) + lenght(test2)];
  char *rest2;
  rest2 = result2;
  rest2 = ft_strncat(res2,test2,k);

  printf("The actual result : %s \n", rest2);  // fezrez

  
  return 0;
}
