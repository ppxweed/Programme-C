#include "ft_boolean.h"

void ft_putchar(char *str)
{
  while(*str)
    {
      write(1,str++,1);
    }
}

t_bool ft_is_even(int nbr)
{
  if(EVEN(nbr))
    {
      return TRUE;
    }
  else
    {
      return FALSE;
    }
}

int main (int argc, char** argv)
{
  (void)argv;
  if(ft_is_even(argc-1) == TRUE)
    {
      (ft_putchar(EVEN_MSG));
    }
  else
    {
      ft_putchar(ODD_MSG);
    }
  return SUCCESS;
}

