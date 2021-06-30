#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lenght(char *str)
{
  int res = 0;
  int i = 0;
  while(str[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}

int ft_strcmp(char *s1, char *s2)
{
  int i = 0;
  int len1 = lenght(s1);
  int tmp1;
  int tmp2;
  while(i <len1)
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
  if(i == len1)
    {
      return 0;
    }
}

int main()
{
  char *test = "DONJOUR TOI";
  char *test2 = "A";

  printf("The result expected : %i || The actual result : %i \n",strcmp(test,test2), ft_strcmp(test,test2));

  char *test1 = "BONJOUR TOI";
  char *test3 = "";

  printf("The result expected : %i || The actual result : %i \n",strcmp(test1,test3), ft_strcmp(test1,test3));

  char *test5 = " ";
  char *test4 = "BONJOUR TO";

  printf("The result expected : %i || The actual result : %i \n",strcmp(test5,test4), ft_strcmp(test5,test4));


  char *test6 = " ";
  char *test7 = "3 ";

  printf("The result expected : %i || The actual result : %i \n",strcmp(test6,test7), ft_strcmp(test6,test7));
  
  
  return 0;
}
