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



char * ft_convert_base(char *nbr, char* base_from, char *base_to)
{
  
}


int main()
{
  char *str="salut toi";
  char *bf = "truc";
  char *bt = "autre truc";
  char *res = ft_convert_base(str,bf,bt);
  int i = 0;
  while(res[i] != '\0')
    {
      printf("The actual result is : %c", res[i]);
      i++;
    }

  return 0;
}

