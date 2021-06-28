#include <stdio.h>


void ft_putstr(char *str)
{
  int i = 0;
  while (str[i] != '\0')
    {
      printf("%c", str[i]);
      i+=1;
    }
  return;
}


