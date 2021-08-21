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


char *ft_concat_params(int argc, char *argv)
{
  int i = 0;
  int j = 0;
  char *res = NULL;
  res = (char*) malloc (argc*sizeof(char));
  while(i < argc)
    {
      res[i] = argv[i]+'\n';
      i+=1;
    }
  while(j< i)
    {
      printf("%c  \n", argv[i]);
      j+=1;
    }
  res[i] = '\0';
  return res;
}


int main(int argc, char *argv)
{
  char * res = ft_concat_params(argc,argv);
  printf("The actual result is : %s \n", res);
  free(res);
  return 0;
}
