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
      if(i == 0 || str[i-1] == ' ')  
	{
	  tmp = str[i]+'0';
	  tmp-=32;
	  res[i] = tmp-'0';
	  i+=1;
	}
      else  //REGLE TOUJOURS PAS LE PROBLEME
	{
	  res[i] = str[i];
	  i+=1;
	}
    }
  str = res;
  str[i] = '\0';
  return str;
}

int main()
{
  char *test = "comment+tu+vas ?en vrai !";
  printf("The expect result : %s \n", ft_strcapitalize(test));// Comment+Tu+Vas ?En Vrai !

 char *test2 = "!";
 printf("The expect result : %s \n", ft_strcapitalize(test2)); //  !

 char *test3 = "AZRAETFDFS";
 printf("The expect result : %s \n", ft_strcapitalize(test2)); //  AZRAEDFDFS

 char *test4 = " ";
 printf("The expect result : %s \n", ft_strcapitalize(test4)); //   

  return 0;
}
