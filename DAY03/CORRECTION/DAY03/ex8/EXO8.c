#include <stdio.h>
#include <stdlib.h>

int Length(char *str)
{
  int i = 0;
  int res  = 0;
  while(str[i] != '\0')
    {
      res +=1;
      i+=1;
    }
  return (res);
}


int ft_atoi(char *str)
{
  int res = 0;
  int is_negative = 0;
  int mult = 1;

  if (str[0] == '-') {
    str = &str[1];
    is_negative = 1;
  }
  
  int len = Length(str) - 1;

  while (len >= 0) {
    res += (str[len] - '0') * mult;

    mult *= 10; 
    len--;
  }

  return (is_negative == 1 ? -res  : res );
}


int main ()
{
  char nbr[] = "1234567";
  char nbr2[] = "-1234567";
  char nbr3[] = "0";
  char nbr4[] = "-2147483648";
  //char nbr5[] = "2147483647";
  char nbr5[] = "214748364723424453";
  

  printf("%i\n",ft_atoi(nbr));
  printf("%i\n",ft_atoi(nbr2));
  printf("%i\n",ft_atoi(nbr3));
  printf("%i\n",ft_atoi(nbr4));
  printf("%i\n",ft_atoi(nbr5));
  printf("%i\n",atoi(nbr5));
  printf("\n");
  return (0) ;
}
