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

char *ft_strstr(char *str, char *to_find)
{
  int i = 0;
  int j =0;
  int len_str = lenght(str);
  char result[100];
  char *res;
  printf("%i  ", len_str);

  while(i< len_str)
    {
        printf("%i  ", i);
      while(str[i] != to_find[j])
	{
	  i+=1;
	}      
      result[j] = str[i];
      i+=1;
      j+=1;
      if(j == len_str-1)
	{
	  result[j] = '\0';
	}
      
    }
  res = result;
  if(i == len_str && res != to_find)
    {
      return NULL;
    }
  else if(lenght(to_find) == 0)
    {
      return str;
    }
  else
    {
      return res;
    }
  
}

int main()
{
  char *test = "BONJOUR TOI";
  char *test2 = "JOUR";

  char *tes = "";
  char *tes2 = "salut";

  char *nb = "03233";
  char *nb2 = "3";

  char *nb3 = "03233";
  char *n4 = "";

  printf("The expected result : %s || The actual result : %s  \n", strstr(test,test2), ft_strstr(test,test2));
  printf("The expected result : %s || The actual result : %s  \n", strstr(tes,tes2), ft_strstr(tes,tes2));
  printf("The expected result : %s || The actual result : %s  \n", strstr(nb,nb2), ft_strstr(nb,nb2));
  printf("The expected result : %s || The actual result : %s  \n", strstr(nb3,n4), ft_strstr(nb3,n4));

  //IL SORT DE LA BOUCLE SANS RAISON J'AI LAISSE LES PRINTS POUR LA COMPREHENSION


  return 0;
}
