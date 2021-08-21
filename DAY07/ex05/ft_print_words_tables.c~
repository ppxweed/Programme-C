#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Lenght(char *str)
{
  int res =0;
  int i =0;
  while (str[i] != '\0')
    {
      res+=1;
      i+=1;
    }
  return res;
}



char **ft_split_whitespaces(char *str)
{
  char charac;
  char *string;
  int i = 0;
  int j = 0;
  int l = Lenght(str);
  string = &charac;
  char **res = &string;
  *res = (char* )malloc(l*sizeof(str));
  while(i < l)
    {
      if(str[i] != ' ' || str[i] != '\n' || str[i]+'0' != 13 )
	{
	  res[j][i] = str[i];
	  i+=1;
	}
      else 
	{
	  while (str[i] == ' ' && str[i] != '\0') 
	    i++;
	  j+=1;
	}
    }
  res[j] = '\0';
  return res;
}


int main()
{
  char str[] = "salut à tous je suis la pourdire pas bonjour";
  char **res = ft_split_whitespaces(str);
  
  /*printf("[");
  int i = 0;
  int j = 0;
  while(j < (sizeof(res)/sizeof(char)))
    {
      for(i= 0 ; i<Lenght(res[j]);i++)
	{
	  if(i = Lenght(res[j]-1))
	    {
	      printf("%c ,",res[j][i]);
	    }
	  printf("%c",res[j][i]);
	}
      j+=1;
    }
  printf("]");

  */

  char str1[] = "salutà    tous    +++== je suis 

la pourdire pas bonjour";
  char **res1 = ft_split_whitespaces(str1);

  
   char str2[] = "";
  char **res2 = ft_split_whitespaces(str2);

   char str3[] = " ";
  char **res3 = ft_split_whitespaces(str3);

   char str4[] = "



";
  char **res4 = ft_split_whitespaces(str4);

   char str5[] = "rezekd k kr ek   \néek&éekk&$é ek&$éke$& ";
  char **res5 = ft_split_whitespaces(str5);

   char str6[] = "123124 123124     \n lopoldsqma 


 ghhd";
  char **res6 = ft_split_whitespaces(str6);

   char str7[] = "axzecvrtb nyu,i;o:─<i, unybt ";
  char **res7 = ft_split_whitespaces(str7);

  char str8[] = "a";
  char **res8 = ft_split_whitespaces(str8);

  char str8[] = "6HRTVB HTEYpmooil:   !";
  char **res8 = ft_split_whitespaces(str8);


  char str9[] = "                 


            \n";
  char **res9 = ft_split_whitespaces(str9);






  
  return 0;
}

