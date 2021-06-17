#include <stdio.h>

int ft_strlen(char *str) //SI L'ESPACE COMPTE COMME CARACTERE
{
  int i = 0;
  int res =0 ;
  while (str[i] != '\0' )
    {
      res+=1;
      i+=1;
    }
  return res;
}

int main ()
{
  char *str = "BONJOUR TOI";
  ft_strlen(str);
  printf("\n");
  return (0) ;
}
