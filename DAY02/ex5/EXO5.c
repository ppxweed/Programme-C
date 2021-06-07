#include <stdio.h>


void ft_print_comb2()
{
  char str[] = "00 01";
  int loop = 0;
  int count =0;
  while(loop == 0)
    {
      if(str[4] == '9')
	{
	  str[3]+=1;
	  str[4]+=(count+1);
	  count+=1;
	  printf("%c ,", str)
	}
      else if (str[4] == '9' && str[3] == '9')
	{
	  str[3]= '0';
	  str[4]+=(count+1) ;
	  str[1] +=1;
	  printf("%c ,", str)
	}
	else if (str[4] == '9' && str[3] == '9' && str[1] == '9')
	  {

	  str[3]= '0';
	  str[1] = '2';
	  str[0] +=1;
	  }
    }

}

int main ()
{
  ft_print_comb2();
  printf("\n");
  return (0) ;
}
