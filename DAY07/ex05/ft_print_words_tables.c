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



void ft_print_words_tables(char **tab)
{
  int i = 0;
  int j = 0;
  while(*tab[i] != '\0')
    {
      while(tab[i][j] != '\0')
	{
	   printf("%c", tab[i][j]);
	   j+=1;
	}
      printf("\n");
      i+=1;
    }
}


int main()
{
  char str[] = "salut à tous je suis la pourdire pas bonjour";
  char **res = ft_split_whitespaces(str);
  ft_print_words_tables(res);
  
  return 0;
}

