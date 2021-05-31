#include <stdio.h>


void ft_print_comb()
{
  char str[] = "012";
  int stop = 0;
  int count = 0;
  while (stop == 0)
    {
     
      if(str[2] == 57)
	{
	  printf("%s, ",str);
	  str[2]-=(count-1);
	  str[1]+=1;
	  count = 0;

	  if (str[1] == 56 )
	    {
	      str[0]+=1;
	      str[1] =str[0]+1;
	      str[2]= str[1]+1;
	    if(str[0]== '7' && str[1]== '8' && str[2] == '9')
	    {
	      printf("%s",str);
	      stop +=1;
	    }
	    else
	      {
		 printf("%s, ",str);
	      }
	     
	    }
	 
	}
      else{
      printf("%s, ",str);
      str[2]+=1;
      count+=1;
      }

    }


}

int main ()
{
  ft_print_comb();
  printf("\n");
  return (0) ;
}
