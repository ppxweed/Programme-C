#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lenght(char *str)
{
  int res = 0;
  int i= 0;
  while(str[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}


char *ft_strupcase(char *str)
{
  int i = 0;
  int tmp;
  char test[lenght(str)];
  while(str[i] != '\0')
    {
      if(str[i]== ' ')
	{
	  test[i]= ' ';
	  i+=1;
	}
      else
	{
	  tmp = str[i];
	  tmp-=32;
	  if(tmp>= 65 && tmp <= 90)
	    {
	      test[i] = tmp;
	    }
	  i+=1;
	}
      
    }
  str = test;
  str[i] = '\0';
  return str;
}

int main()
{
  char *test = "bonjour toi";
  printf(" The actual result : %s \n", ft_strupcase(test)); //The expected result : BONJOUR TOI

  char *test1 = " ";
  printf(" The actual result : %s \n", ft_strupcase(test1)); //The expected result :

   char *test2 = "HELLO";
  printf(" The actual result : %s \n", ft_strupcase(test2)); //The expected result : HELLO
  
  return 0;
}
