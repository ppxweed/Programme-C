#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Lenght(char *str)
{
  int res =0;
  int i =0;
  while (str[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}


char *ft_strdup(char *src)
{
  int i = 0;
  char *res = NULL;
  int l = Lenght(src);
  res = (char*) malloc (l*sizeof(char));
  while(src[i] != '\0')
    {
      res[i] = src[i];
      i+=1;
    }
  res[i] = '\0';
  free(res);
  return res;
}


int main()
{
  char *source = "salut toi";
  char *res = ft_strdup(source);

  printf("The expected result : %s || The actual result : %s \n", strdup(source), res);


  char *source1 = " ";
  char *res1 = ft_strdup(source);

  printf("The expected result : %s || The actual result : %s \n", strdup(source1), res1);


   char *source2 = "-1";
  char *res2 = ft_strdup(source);

  printf("The expected result : %s || The actual result : %s \n", strdup(source2), res2);

  char *source3 = "!BONJOUR ù⁾ç";
  char *res3 = ft_strdup(source);

  printf("The expected result : %s || The actual result : %s \n", strdup(source3), res3);

  
  return 0;
}
