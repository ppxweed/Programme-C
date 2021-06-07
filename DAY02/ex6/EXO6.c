#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
};

void ft_putnbr(int nbr) {
  if (nbr == 0) {
    ft_putchar('0');
    return;
  }
  int taille = 10;
  char str[taille];
  char num = 0;
  int i = 0;
  int k =0;
  int j = 0;

  while (k <= taille) {
    num = (nbr % 10) + '0';
    nbr = nbr / 10;
    str[9 - k] = num;
    k++;
  }
  for(i=0; i<taille; i++ )
    {
      if( str[i]=='0') //le i foire le tout a 4 car il devient str[i]== 4
         {
             for(j=i; j < taille; j++)
             {
                if( j < taille-1)
                {
                    str[j] = str[j+1];
                }
                else
                {
                    str[j] = 0;
                }
             }
         }
    }
  printf("%s",str);
}

int main () {
  ft_putnbr(43);
  printf("\n");
  return (0);
}
