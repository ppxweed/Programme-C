#include <stdio.h>

void ft_putchar(char str);

int main (int argc, char **argv)
{
  int i = 0;
  while(argv[0][i] != '\0')
    {
      ft_putchar(argv[0][i]);
      i+=1;
    }
  printf("\n");
  return 0;
}
