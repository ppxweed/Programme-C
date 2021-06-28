#include <stdio.h>

int main (int argc, char **argv)
{
  while(argc != 0)
    {
      printf("%i", argc);
      ft_putstr(argv[2] );
      ft_putstr('\n');
    }
  return 0;
}
