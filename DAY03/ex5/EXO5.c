#include <stdio.h>


void ft_strlen(char *str) //SI L'ESPACE NE COMPTE PAS COMME CARACTERE
{
  int i = 0;
  int res =0 ;
  while (str[i] != '\0' )
    {
      if(str[i] != 32)
	{
	  res+=1;
	  i+=1;
	}
      else
	{
	  i+=1;
	}
    }
  printf("%i ", res);
  return;
}



void ft_strlen(char *str) //SI L'ESPACE COMPTE COMME CARACTERE
{
  int i = 0;
  int res =0 ;
  while (str[i] != '\0' )
    {
      res+=1;
      i+=1;
    }
  printf("%i ", res);
  return;
}

int main ()
{
  char *str = "BONJOUR TOI";
  ft_strlen(str);
  printf("\n");
  return (0) ;
}
