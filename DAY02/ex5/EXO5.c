#include <stdio.h>


void ft_print_comb2()
{
  char str[] = "00 01";
  int loop = 0;
  while(loop == 0)
    {
      if (str[4] == '9' && str[3] == '9')
	{
	  str[0]='0';
	  str[1] +=1;
	  str[3] = str[0];
	  str[4]= str[1]+1;

	  if(str[4] == '9')
	    {
	      str[3]+=1;
	      str[4]='0';
	    }
	  printf("%s ,", str);
	  
	}
      
      else if(str[4] == '9')
	{
	  str[3]+=1;
	  str[4]='0';
	  printf("%s ,", str);
	}
      if (str[4] == '9' && str[3]=='9' && str[1] == '8' && str[0]== '9')
	{
	  loop+=1;
	}
      str[4]+=1;
      printf("%s ,", str);
    }

}

int main ()
{
  ft_print_comb2();
  printf("\n");
  return (0) ;
}
