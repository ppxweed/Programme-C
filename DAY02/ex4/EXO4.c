#include <stdio.h>


void ft_print_comb()
{
  char str[] = "012";
  int i = 2;
  while (str[i] <= 57)
    {
      if(str[i] == 57)
	{
	  printf("%s,",str);
	  str[i]-=(57+str[i+1]);
	  str[i-1]+=1;
	}
      printf("%s,",str);
      str[i]+=1;
    }


}

int main ()
{
  ft_print_comb();
  printf("\n");
  return (0) ;
}
