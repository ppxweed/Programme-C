#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, int n)
{
  int i = 0;
  int tmp1;
  int tmp2;
  if(n < 0)
    {
      n = -n;
    }
  while(i <n)
    {
      tmp1 = s1[i]+'0';
      tmp2 = s2[i]+'0';
      if(tmp1 > tmp2)
	{
	  return (tmp1-tmp2);
	}
      else if (tmp2 > tmp1)
	{
	  return (tmp1-tmp2);
	}
      else
	{
	  i+=1;
	}
    }
  if(i == n)
    {
      return 0;
    }
}

int main()
{
  char *test = "BONJOUR TOI";
  char *test2 = "900A";
  int n = 4;

  printf("The expected result : %i || The actual result : %i \n", strncmp(test,test2,n), ft_strncmp(test,test2,n));

  char *test1 = " ";
  char *test3 = "900A";
  int f = 0;

  printf("The expected result : %i || The actual result : %i \n", strncmp(test1,test3,f), ft_strncmp(test1,test3,f));

  char *test4 = "*az*$d";
  char *test5 = "";
  int g = -1;

  printf("The expected result : %i || The actual result : %i \n", strncmp(test4,test5,g), ft_strncmp(test4,test5,g));
  
  return 0;
}
