#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
};

void ft_putnbr(int nbr) {
  if (nbr == 0) {
    ft_putchar('0');
    return;
  }

  char str[10];
  char num = 0;
  int i = 0;

  while (i <= 10) {
    num = (nbr % 10) + '0';
    nbr = nbr / 10;
    str[9 - i] = num;
    i++;
  }
  printf("%s",str);
}

int main () {
  ft_putnbr(42);
  return (0);
}
