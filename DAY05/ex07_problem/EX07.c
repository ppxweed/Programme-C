#include <stdio.h>
#include <stdlib.h>


int lenght(char *str)
{
  int i = 0;
  int res;
  while(str[i]!= '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}

char  *ft_strcapitalize(char *str)
{
  int i = 0;
  char res[lenght(str)];
  int tmp = 0;
  while(str[i] != '\0')
    {
      printf("%i \n", str[i]-32);
      if(i == 0 || (str[i-1]-32 ==0) )
	{
	  tmp = str[i]+'0';
	  tmp-=32;
	  res[i] = tmp-'0';
	  i+=1;
	}
      else
	{
	  res[i] = str[i];
	  i+=1;
	}
    }
  str = res;
  return str;
}

int main()
{
  char *test = "comment tu vas ? en vrai !";
  char *res;
  res = ft_strcapitalize(test);
  printf("%s", res);
  printf("\n");
  return 0;
}
