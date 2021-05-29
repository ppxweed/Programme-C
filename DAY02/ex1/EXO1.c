#include <stdio.h>


void print_reverse_alphabet()
{
  char res ='z';

  while(res >= 'a')
    {
	printf("%c",res);
	res-=1;
    }
}

int main ()
{
  print_reverse_alphabet();
  printf("\n");
  return (0) ;
}
