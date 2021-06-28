#include <stdio.h>

int main (int argc, char **argv)
{
  int i = 1;
  while(i < argc)
    {
      ft_putstr(argv[i] );
      ft_putstr('\n');
	i+=1;
    }
  return 0;
}
