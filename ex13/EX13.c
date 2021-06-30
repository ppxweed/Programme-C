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
  dest[i] = '\0';
  return dest;
}

int main()
{
  char *res = "fezrez";
  char *test = "ertt"; 
  char result[lenght(res) + lenght(test)];
  char *rest;
  rest = result;
  rest = ft_strcat(res,test);
  
  printf("The actual result : %s \n", rest); //fezrezertt


  char *res1 = "";
  char *test1 = "ertt"; 
  char result1[lenght(res1) + lenght(test1)];
  char *rest1;
  rest1 = result1;
  rest1 = ft_strcat(res1,test1);

  printf("The actual result : %s \n", rest1); // ertt


  char *res2 = "fezrez";
  char *test2 = ""; 
  char result2[lenght(res2) + lenght(test2)];
  char *rest2;
  rest2 = result2;
  rest2 = ft_strcat(res2,test2);

  printf("The actual result : %s \n", rest2);  // fezrez


  
  
  return 0;
}
