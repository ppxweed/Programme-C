#include <stdio.h>

void ft_putchar(char str);

int ft_strlen(char* str);

int main (int argc, char **argv)
{
  int i;
  int j;
  int j_len = 0;
  for(i= argc-1; i > 0; i-- )
    {
      j_len = ft_strlen(argv[i]);
      for(j= 0; j < j_len ; j++ )
	{
	  ft_putchar(argv[i][j]);
	}

      ft_putchar('\n');
    }
  return 0;
}
