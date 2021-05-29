#include <stdio.h>


void print_number()
{
  int res =1;

  while(res <= 9)
    {
	printf("%d",res);
	res+=1;
    }
}

int main ()
{
  print_number();
  printf("\n");
  return (0) ;
}
