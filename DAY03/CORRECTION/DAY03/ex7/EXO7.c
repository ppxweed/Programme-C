#include <stdio.h>

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


char *ft_strrev(char *str)
{
  int j = 0;
  int i;
  char tmp;
  int len = Length(str);
  for (i = len-1; i >= (len / 2); i--)
  {
    tmp = str[j];
    str[j] = str[i];
    str[i] = tmp; 
    
    j += 1;
  }
  return (str);
}


int main ()
{
  char schar[] = "HELLO";
  char *s2 = "HELLO";

  printf("%c\n",*schar);
  printf("%c\n",schar[4]);
  printf("%c\n",*s2);
  printf("%c\n",s2[4]);
  printf("%s",ft_strrev(schar));
  printf("\n");
  return (0) ;
}
